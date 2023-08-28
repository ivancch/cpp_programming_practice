//============================================================================
// Name        : c++_programming_practice.cpp
// Author      : Ivan Chenchik
// Version     :
// Copyright   : 
// Description :
//============================================================================

#include <iostream>
#include <conio.h>
#include "difficulty_of_tasks/myincludes1.h"

int main() {
	std::cout << "Start of programs\n\n";

	std::vector<std::string> myVec = string_to_array("some value");

	for(const std::string &str : myVec)
	{
		std::cout << "" << str << ',';
	}

	std::cout << "\n\nEnd of program" << std::endl;
	_getch();
	return 0;
}
