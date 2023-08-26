/*
 * 1shortest_word.h
 *
 *  Created on: 23 авг. 2023 г.
 *      Author: ivan-
 *
 * 	Simple, given a string of words, return the length of the shortest word(s).
 * 	String will never be empty and you do not need to account for different data types.
 *
 * 	Просто, учитывая строку слов, вернуть длину кратчайшего слова (слов).
 * 	Строка никогда не будет пустой, и вам не нужно учитывать разные типы данных.
 *
 */

#ifndef DIFFICULTY_OF_TASKS_2SHORTEST_WORD_H_
#define DIFFICULTY_OF_TASKS_2SHORTEST_WORD_H_

#include <string>

namespace shortestWord
{
	int find_short(std::string str)
	{
		int count = 0;
		int min = 1000;

		for(const char &ch : str)
		{
			if(ch != ' ')
			{
				count++;
				if (ch == str[str.length()-1])
					min = count < min ? count : min;
			}
			else
			{
				min = count < min ? count : min;
				count = 0;
			}
		}
		return min;
	}
}



//Describe(Tests)
//{
//  It(Sample_Test_Cases)
//  {
//    Assert::That(find_short("bitcoin take over the world maybe who knows perhaps"), Equals(3));
//    Assert::That(find_short("turns out random test cases are easier than writing out basic ones"), Equals(3));
//    Assert::That(find_short("lets talk about javascript the best language"), Equals(3));
//    Assert::That(find_short("i want to travel the world writing code one day"), Equals(1));
//    Assert::That(find_short("Lets all go on holiday somewhere very cold"), Equals(2));
//    Assert::That(find_short("Let's travel abroad shall we"), Equals(2));
//  }
//};

#endif /* DIFFICULTY_OF_TASKS_2SHORTEST_WORD_H_ */
