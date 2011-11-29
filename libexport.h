#ifndef EXP_H
#define EXP_H

#ifdef __cplusplus
#define EXT_C extern "C"
#else
#define EXT_C extern
#endif

#ifdef _WIN32
#	ifdef LIB
#		ifdef LIB_EXPORTS
#			define LIB_EXPORT EXT_C __declspec(dllexport)
#		else
#			define LIB_EXPORT EXT_C __declspec(dllimport)
#		endif
#	else
#		define LIB_EXPORT EXT_C
#	endif
#else
#	define LIB_EXPORT EXT_C __attribute__((visibility("default")))
#endif

#endif
