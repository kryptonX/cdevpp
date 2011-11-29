/* Copyright 2011  */

#include "stdafx.h"
#include <iostream>

int main(int args) {
	if (args < 2)
		system("cmd /c dir > dir.log");
	else if (args < 0) 
		std::cout << "Not enough arguements!\n";
	else if (args > 2)
		std::cout << "Too many arguements!\n";
	else
		std::cout << "How in the world?";	/* Won't happen anyways */
	return 0;
}
