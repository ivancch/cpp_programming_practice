/*
 * 3who_likes_it.h
 *
 *  Created on: 30 авг. 2023 г.
 *      Author: ivan-
 *
 *	You probably know the "like" system from Facebook and other pages.
 *	People can "like" blog posts, pictures or other items.
 *	We want to create the text that should be displayed next to such an item.
 *
 *	Implement the function which takes an array containing the names of people
 *	that like an item. It must return the display text as shown in the examples:
 *
 *	[]                                -->  "no one likes this"
 *	["Peter"]                         -->  "Peter likes this"
 *  ["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
 * 	["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
 *  ["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
 *
 *
 *  Вы, наверное, знаете систему лайков по Facebook и другим страницам.
 *  Люди могут ставить лайки постам в блогах, изображениям и другим элементам.
 *  Мы хотим создать текст, который должен отображаться рядом с таким элементом.
 *
 *  Реализуйте функцию, которая принимает массив, содержащий имена людей,
 *  которым понравился предмет. Он должен возвращать отображаемый текст,
 *  как показано в примерах.
 *
 *
 */

#ifndef DIFFICULTY_OF_TASKS_3WHO_LIKES_IT_H_
#define DIFFICULTY_OF_TASKS_3WHO_LIKES_IT_H_

#include <vector>

std::string whoLikesIt(const std::vector<std::string> &names)
{
	switch (names.size())
	{
	case 0: return "no one likes this";
	case 1: return names[0] + " likes this";
	case 2: return names[0] + "and" + names[1] + " likes this";
	case 3: return names[0] + ", " + names[1] + " and " + names[2] + " like this";
	default: return names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
	}
}



//Describe(sample_tests)
//{
//    It(should_return_correct_text)
//    {
//        Assert::That(likes({}), Equals("no one likes this"));
//        Assert::That(likes({"Peter"}), Equals("Peter likes this"));
//        Assert::That(likes({"Jacob", "Alex"}), Equals("Jacob and Alex like this"));
//        Assert::That(likes({"Max", "John", "Mark"}), Equals("Max, John and Mark like this"));
//        Assert::That(likes({"Alex", "Jacob", "Mark", "Max"}), Equals("Alex, Jacob and 2 others like this"));
//    }
//};

#endif /* DIFFICULTY_OF_TASKS_3WHO_LIKES_IT_H_ */
