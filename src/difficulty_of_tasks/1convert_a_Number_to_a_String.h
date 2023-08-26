/*
 * 1convert_a_Number_to_a_String.h
 *
 *  Created on: 25 авг. 2023 г.
 *      Author: ivan-
 *
 *	We need a function that can transform a number (integer) into a string.
 *  What ways of achieving this do you know?
 *
 *  Нам нужна функция, которая может преобразовать число (целое) в строку.
 *  Какие способы достижения этой цели вы знаете?
 *
 *  123  --> "123"
 *  999  --> "999"
 *  -100 --> "-100"
 *
 */

#ifndef DIFFICULTY_OF_TASKS_1CONVERT_A_NUMBER_TO_A_STRING_H_
#define DIFFICULTY_OF_TASKS_1CONVERT_A_NUMBER_TO_A_STRING_H_

#include <string>
#include <sstream>

std::string number_to_string(int num)
{
	return std::to_string(num);
}

std::string number_to_string_2(int num)
{
	std::ostringstream oss;
	oss << num;
	return oss.str();
}

std::string number_to_string_3(int num)
{
	std::stringstream oss;
	oss << num;
	return oss.str();
}


//Describe(number_to_string_function) {
//  It(should_convert_a_number_to_string) {
//    Assert::That(number_to_string(1+2), Equals("3"));
//    Assert::That(number_to_string(67), Equals("67"));
//    Assert::That(number_to_string(-5), Equals("-5"));
//  }
//};

#endif /* DIFFICULTY_OF_TASKS_1CONVERT_A_NUMBER_TO_A_STRING_H_ */
