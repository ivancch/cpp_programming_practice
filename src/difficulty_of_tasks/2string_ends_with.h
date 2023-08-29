/*
 * 2string_ends_with.h
 *
 *  Created on: 29 авг. 2023 г.
 *      Author: ivan-
 *
 *	Complete the solution so that it returns true if the first argument(string)
 *	passed in ends with the 2nd argument (also a string).
 *
 *	solution('abc', 'bc') // returns true
 *	solution('abc', 'd')  // returns false
 */

#ifndef DIFFICULTY_OF_TASKS_2STRING_ENDS_WITH_H_
#define DIFFICULTY_OF_TASKS_2STRING_ENDS_WITH_H_

#include <string>
bool string_ends_with(std::string const &str, std::string const &ending)
{
	if (ending.empty()) return true;
	for(size_t i = 0; i < ending.size(); i++)
		if ((str[str.size()-i-1]) != (ending[ending.size()-i-1]))
			return false;
    return true;
}

bool string_ends_with2(std::string const &str, std::string const &ending)
{
    return std::equal(ending.rbegin(), ending.rend(), str.rbegin());
}

bool string_ends_with3(std::string const &str, std::string const &ending)
{
    return (std::string(str.end() - ending.size(), str.end()) == ending);
}

//Describe(Tests)
//{
//  It(Sample_Test_Cases)
//  {
//    Assert::That(solution("abcde", "cde"), Equals(true));
//    Assert::That(solution("abcde", "abc"), Equals(false));
//    Assert::That(solution("abc", ""), Equals(true));
//  }
//};

#endif /* DIFFICULTY_OF_TASKS_2STRING_ENDS_WITH_H_ */
