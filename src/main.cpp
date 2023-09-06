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

	std::cout << findOdd({20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}) << std::endl;
	std::cout << findOdd({1,1,2,-2,5,2,4,4,-1,-2,5}) << std::endl;
	std::cout << findOdd({20,1,1,2,2,3,3,5,5,4,20,4,5}) << std::endl;
	std::cout << findOdd({10}) << std::endl;
	std::cout << findOdd({1,1,1,1,1,1,10,1,1,1,1}) << std::endl;


	std::cout << "\n\nEnd of program" << std::endl;
	_getch();
	return 0;
}
