/*
 * 1convert_a_string_to_an_array.h
 *
 *  Created on: 27 авг. 2023 г.
 *      Author: ivan-
 *
 *	Write a function to split a string and convert it into an array of words.
 *
 *	"Robin Singh" ==> ["Robin", "Singh"]
 *
 *	"I love arrays they are my favorite" ==>
 *	["I", "love", "arrays", "they", "are", "my", "favorite"]
 */

#ifndef DIFFICULTY_OF_TASKS_1CONVERT_A_STRING_TO_AN_ARRAY_H_
#define DIFFICULTY_OF_TASKS_1CONVERT_A_STRING_TO_AN_ARRAY_H_

#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> string_to_array(const std::string &str)
{
	if (str == "") return {""};

	std::vector<std::string> vecResult;
	std::ostringstream outStr;
	for (size_t i = 0; i < str.size()+1; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			vecResult.push_back(outStr.str());
			outStr.str("");
			outStr.clear();
			if (str[i] == '\0')
				return vecResult;
			continue;
		}
		outStr << str[i];
	}
	return vecResult;

}


//Describe(Fixed_tests)
//{
//    It(Basic_cases)
//    {
//        Assert::That(string_to_array("some value"),
//                     Equals(std::vector<std::string>{"some", "value"}));
//        Assert::That(string_to_array("Robin Singh"),
//                     Equals(std::vector<std::string>{"Robin", "Singh"}));
//        Assert::That(string_to_array("Codewars"),
//                     Equals(std::vector<std::string>{"Codewars"}));
//        Assert::That(string_to_array("I love arrays"),
//                     Equals(std::vector<std::string>{"I", "love", "arrays"}));
//        Assert::That(string_to_array("1 2 3"),
//                     Equals(std::vector<std::string>{"1", "2", "3"}));
//    }
//
//    It(Empty_string)
//    { Assert::That(string_to_array(""), Equals(std::vector<std::string>{""})); }
//};



#endif /* DIFFICULTY_OF_TASKS_1CONVERT_A_STRING_TO_AN_ARRAY_H_ */
