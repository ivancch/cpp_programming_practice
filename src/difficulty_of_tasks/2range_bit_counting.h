/*
 * 2range_bit_counting.h
 *
 *  Created on: 29 авг. 2023 г.
 *      Author: ivan-
 *
 *	You are given two numbers a and b where 0 ≤ a ≤ b.
 *	Imagine you construct an array of all the integers from a to b inclusive.
 *	You need to count the number of 1s in the binary representations
 *	of all the numbers in the array.
 *
 *	For a = 2 and b = 7, the output should be 11
 *	Given a = 2 and b = 7 the array is: [2, 3, 4, 5, 6, 7].
 *	Converting the numbers to binary, we get [10, 11, 100, 101, 110, 111],
 *	which contains 1 + 2 + 1 + 2 + 2 + 3 = 111
 *
 *	0 ≤ a ≤ b.
 *	a ≤ b ≤ 100.
 *
 */

#ifndef DIFFICULTY_OF_TASKS_2RANGE_BIT_COUNTING_H_
#define DIFFICULTY_OF_TASKS_2RANGE_BIT_COUNTING_H_


typedef unsigned int ui;

ui rangeBitCount(ui a, ui b)
{
	ui result = 0;
	ui i, j;
	for (i = a; i < b+1; i++)
		for (j = 0; j < 32; j++)
			if (((i >> j) & 1))
				result++;
	return result;
}

#include <algorithm>

#include <bitset>
ui rangeBitCount2(ui a, ui b) {
	ui sum{0};
	for (ui i = a; i <= b; i++)
		sum += std::bitset<32>(i).count();
	return sum;
}


//Describe(tests)
//{
//    It(sample_tests)
//    {
//        Assert::That(rangeBitCount(2, 7), Equals(11), ExtraMessage("Test failed with a = %d, b= %d\\n"));
//        Assert::That(rangeBitCount(0, 1), Equals(1), ExtraMessage("Test failed with a = %d, b= %d\\n"));
//        Assert::That(rangeBitCount(4, 4), Equals(1), ExtraMessage("Test failed with a = %d, b= %d\\n"));
//
//    }
//};


#endif /* DIFFICULTY_OF_TASKS_2RANGE_BIT_COUNTING_H_ */
