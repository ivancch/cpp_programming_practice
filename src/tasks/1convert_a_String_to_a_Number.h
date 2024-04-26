/*
 * 1convert_a_String_to_a_Number.h
 *
 *  Created on: 25 авг. 2023 г.
 *      Author: ivan-
 *
 *	We need a function that can transform a string into a number.
 *	What ways of achieving this do you know?
 *
 *	Note: Don't worry, all inputs will be strings, and every string is
 *	a perfectly valid representation of an integral number.
 *
 *	Нам нужна функция, которая может преобразовать строку в число.
 *	Какие способы достижения этой цели вы знаете?
 *
 *	Примечание. Не волнуйтесь, все входные данные будут строками,
 *	и каждая строка является совершенно допустимым представлением целого числа.
 *
 *	"1234" --> 1234
 *	"605"  --> 605
 *	"1405" --> 1405
 *	"-7" --> -7
 *
 */

#ifndef DIFFICULTY_OF_TASKS_1CONVERT_A_STRING_TO_A_NUMBER_H_
#define DIFFICULTY_OF_TASKS_1CONVERT_A_STRING_TO_A_NUMBER_H_

#include <string>
#include <sstream>


int string_to_number(const std::string& s)
{
	return stoi(s);
}

int string_to_number_2(const std::string& s)
{
	int result;
	std::stringstream (s) >> result;
	return result;
}


//Describe(stringToNumber)
//{
//    It(shouldWorkForTheExamples)
//    {
//        AssertThat(string_to_number("123456"), Is().EqualTo(123456));
//        AssertThat(string_to_number("352605"), Is().EqualTo(352605));
//        AssertThat(string_to_number("-321405"), Is().EqualTo(-321405));
//        AssertThat(string_to_number("-7"), Is().EqualTo(-7));
//        AssertThat(string_to_number("0"), Is().EqualTo(0));
//        AssertThat(string_to_number("-0"), Is().EqualTo(0));
//    }
//};

#endif /* DIFFICULTY_OF_TASKS_1CONVERT_A_STRING_TO_A_NUMBER_H_ */
