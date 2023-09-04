/*
 * 3stop_gninnipS_My_sdroW.h
 *
 *  Created on: 4 сент. 2023 г.
 *      Author: ivan-
 *	Write a function that takes in a string of one or more words,
 *	and returns the same string, but with all five or more letter words reversed
 *	(Just like the name of this Kata). Strings passed in will consist of only
 *	letters and spaces. Spaces will be included only when more than
 *	one word is present.
 *
 *	spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw"
 *	spinWords( "This is a test") => returns "This is a test"
 *	spinWords( "This is another test" )=> returns "This is rehtona test"
 *
 *	Напишите функцию, которая принимает строку, состоящую из одного или
 *	нескольких слов, и возвращает ту же строку, но с перевернутыми всеми пятью
 *	или более буквами слов (точно так же, как название этой ката).
 *	Передаваемые строки будут состоять только из букв и пробелов.
 *	Пробелы будут включены только в том случае, если присутствует более
 *	одного слова.
 */

#ifndef DIFFICULTY_OF_TASKS_3STOP_GNINNIPS_MY_SDROW_H_
#define DIFFICULTY_OF_TASKS_3STOP_GNINNIPS_MY_SDROW_H_



#include <algorithm>
std::string spinWords(const std::string &str)
{
	std::stringstream resultStream{}, wordStream{};
	std::string tmp = "";

	for (size_t i = 0; i < str.length(); i++)
	{
			std::cout << "123\n";
		wordStream << str[i];
		if (str[i] == ' ' || str[i+1] == '\0')
		{
			std::cout << "123\n";
			tmp = wordStream.str();
			wordStream.clear();
			if(tmp.length() > 5)
				std::reverse(tmp.begin(), tmp.end());
			resultStream << tmp;
			tmp = "";
		}
	}
//	std::cout << wordStream.str() << '\n';
	return resultStream.str();
}// spinWords





//Describe(Sample_Tests)
//{
//    It(Single_Word)
//    {
//        Assert::That(spinWords("Welcome"), Equals("emocleW"));
//        Assert::That(spinWords("to"), Equals("to"));
//        Assert::That(spinWords("CodeWars"), Equals("sraWedoC"));
//    }
//
//    It(Mulitple_Words)
//    {
//      Assert::That(spinWords("Hey fellow warriors"), Equals("Hey wollef sroirraw"));
//      Assert::That(spinWords("Burgers are my favorite fruit"), Equals("sregruB are my etirovaf tiurf"));
//      Assert::That(spinWords("Pizza is the best vegetable"), Equals("azziP is the best elbategev"));
//    }
//};

#endif /* DIFFICULTY_OF_TASKS_3STOP_GNINNIPS_MY_SDROW_H_ */
