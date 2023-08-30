/*
 * 2valid_parentheses.h
 *
 *  Created on: 30 авг. 2023 г.
 *      Author: ivan-
 *
 *	Write a function that takes a string of parentheses,
 *	and determines if the order of the parentheses is valid.
 *	The function should return true if the string is valid,
 *	and false if it's invalid.
 *
 *	All inputs will be strings, consisting only of characters ( and ).
 *	Empty strings are considered balanced (and therefore valid), and will be tested.
 *
 *	"()"			  =>  true
 *	")(()))"          =>  false
 *	"("               =>  false
 *	"(())((()())())"  =>  true
 */

#ifndef DIFFICULTY_OF_TASKS_2VALID_PARENTHESES_H_
#define DIFFICULTY_OF_TASKS_2VALID_PARENTHESES_H_


#include <string>


bool validParentheses(const std::string &str)
{
	int count = 0;
	for (const char &ch : str)
	{
		ch == '(' ? count++ : count--;
		if (count < 0) return false;
	}
	return !count;
}


//Describe(SampleTests)
//{
//  It(ValidCases)
//  {
//    dotest("()",                 true);
//    dotest("((()))",             true);
//    dotest("()()()",             true);
//    dotest("(()())()",           true);
//    dotest("()(())((()))(())()", true);
//  }
//
//  It(EmptyString) {
//    dotest("", true);
//  }
//
//  It(InvalidCases) {
//    dotest(")(",     false);
//    dotest("()()(",  false);
//    dotest("((())",  false);
//    dotest("())(()", false);
//    dotest(")()",    false);
//    dotest(")",      false);
//  }
//
//private:
//  void dotest(const std::string& str, bool expected) {
//    bool actual = validParentheses(str);
//    auto msg    = ExtraMessage("Incorrect answer for input = \"" + str + "\"");
//    Assert::That(actual, Equals(expected), msg);
//  }
//};

#endif /* DIFFICULTY_OF_TASKS_2VALID_PARENTHESES_H_ */
