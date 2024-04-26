/*
 * 3create_phone_number.h
 *
 *  Created on: 30 авг. 2023 г.
 *      Author: ivan-
 *
 *	Write a function that accepts an array of 10 integers (between 0 and 9),
 *	that returns a string of those numbers in the form of a phone number.
 *
 *	createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0})
 *													 => returns "(123) 456-7890"
 */

#ifndef DIFFICULTY_OF_TASKS_3CREATE_PHONE_NUMBER_H_
#define DIFFICULTY_OF_TASKS_3CREATE_PHONE_NUMBER_H_

#include <string>

std::string createPhoneNumber(const int arr [10]){
	std::ostringstream stream;
	stream << '(';
	for (int i = 0; i < 3; i++) stream << i;
	stream << ") ";
	for (int i = 3; i < 6; i++) stream << i;
	stream << '-';
	for (int i = 6; i < 10; i++) stream << i;
	return stream.str();
}

std::string createPhoneNumber2(const int digits[10]) {
	std::string res = "(...) ...-....";
	for (unsigned is = 0, id = 0; is < res.length(); is++)
		if (res[is] == '.')
			res[is] = '0' + digits[id++];
	return res;
}

std::string createPhoneNumber3(const int arr [10]){
	std::string number = "";
	for (int i = 0; i < 10; i++)
		number += std::to_string(arr[i]);

	number.insert(0, "(");
	number.insert(4, ") ");
	number.insert(9, "-");

	return number;
}

//using arr = int [10];
//
//Describe(CreatePhoneNumber) {
//    It(BasicTests) {
//        Assert::That(createPhoneNumber(arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}), Equals("(123) 456-7890"));
//        Assert::That(createPhoneNumber(arr{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}), Equals("(111) 111-1111"));
//        Assert::That(createPhoneNumber(arr{1, 2, 3, 4, 5, 6, 8, 8, 0, 0}), Equals("(123) 456-8800"));
//        Assert::That(createPhoneNumber(arr{0, 2, 3, 0, 5, 6, 0, 8, 9, 0}), Equals("(023) 056-0890"));
//        Assert::That(createPhoneNumber(arr{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}), Equals("(000) 000-0000"));
//    }
//};

#endif /* DIFFICULTY_OF_TASKS_3CREATE_PHONE_NUMBER_H_ */
