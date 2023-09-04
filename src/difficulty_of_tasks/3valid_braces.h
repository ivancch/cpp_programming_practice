/*
 * 3valid_braces.h
 *
 *  Created on: 30 авг. 2023 г.
 *      Author: ivan-
 *
 *	Write a function that takes a string of braces, and determines if
 *	the order of the braces is valid.
 *	It should return true if the string is valid, and false if it's invalid.
 *
 *	All input strings will be nonempty, and will only consist of parentheses,
 *	brackets and curly braces: ()[]{}.
 *
 *	"(){}[]"   =>  True
 *	"([{}])"   =>  True
 *	"(}"       =>  False
 *  "[(])"     =>  False
 *	"[({})](]" =>  False
 *
 *	Напишите функцию, которая принимает строку фигурных скобок и определяет,
 *	допустим ли порядок фигурных скобок.
 *	Он должен возвращать true, если строка действительна,
 *	и false, если она недействительна.
 *
 *	Все входные строки будут непустыми и будут состоять только из круглых,
 *	квадратных и фигурных скобок: ()[]{}.
 */

#ifndef DIFFICULTY_OF_TASKS_3VALID_BRACES_H_
#define DIFFICULTY_OF_TASKS_3VALID_BRACES_H_

#include <stack>

bool valid_braces(const std::string &braces)
{
	std::stack<char> stack{};
	char lastPop;

	for (const char &ch : braces)
	{
		if (ch == '(' || ch == '[' || ch =='{')
			stack.push(ch);
		else if (!stack.empty())
		{
			lastPop = stack.top();
			stack.pop();
			if ((lastPop == '(' && ch != ')') ||
				(lastPop == '[' && ch != ']') ||
				(lastPop == '{' && ch != '}')) //|| lastPop != ']' || lastPop !='}'
					return false;
		}
		else
			return false;
	}
	return stack.empty();
}

bool valid_braces2(const std::string &braces)
{
  std::vector<char> stack;
  for (const char &tok : braces) {
    switch(tok)
    {
    case '(': stack.push_back(')'); break;
    case '[': stack.push_back(']'); break;
    case '{': stack.push_back('}'); break;
    case '}':
    case ']':
    case ')':
      if (stack.empty() || stack.back() != tok)
        return false;
      stack.pop_back();
    }
  }
  return stack.empty();
}

bool valid_braces3(const std::string &braces)
{
	std::stack<char> s = {};
	for(const char &x : braces)
		if(!s.empty() && ((x=='}' && s.top() == '{') ||
    				  	  (x==']' && s.top() == '[') ||
						  (x==')' && s.top() == '(')))
			s.pop();
		else s.push(x);
	return s.empty();
}

/*
//// Some macros for easy true/false assertions
//#define assert_valid(s) \
//  if(!valid_braces(s)) std::cout << "Expected " << s << " to be valid." << std::endl; \
//  Assert::That(valid_braces(s), Equals(true));
//#define assert_invalid(s) \
//  if(valid_braces(s)) std::cout << "Expected " << s << " to be invalid." << std::endl; \
//  Assert::That(valid_braces(s), Equals(false));
//
//Describe(valid_braces_algorithm)
//{
//  It(basic_tests)
//  {
//    assert_valid( "()" );
//    assert_invalid( "[(])" );
//  }
//};
 */

#endif /* DIFFICULTY_OF_TASKS_3VALID_BRACES_H_ */













