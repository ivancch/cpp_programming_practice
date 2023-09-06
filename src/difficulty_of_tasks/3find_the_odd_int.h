/*
 * 3find_the_odd_int.h
 *
 *  Created on: 5 сент. 2023 г.
 *      Author: ivan-
 *
 *	Given an array of integers, find the one that appears an odd number of times.
 *	There will always be only one integer that appears an odd number of times.
 *
 *	[7] should return 7, because it occurs 1 time (which is odd).
 *	[0] should return 0, because it occurs 1 time (which is odd).
 *	[1,1,2] should return 2, because it occurs 1 time (which is odd).
 *	[0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
 *	[1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).
 *
 *	В массиве целых чисел найдите то, которое встречается нечетное количество раз.
 *	Всегда будет только одно целое число, которое появляется нечетное количество раз.
 */

#ifndef DIFFICULTY_OF_TASKS_3FIND_THE_ODD_INT_H_
#define DIFFICULTY_OF_TASKS_3FIND_THE_ODD_INT_H_

#include <vector>
#include <set>
#include <unordered_map>

int findOdd(const std::vector<int> &numbers){
	std::vector<int> numCopy = numbers;

	std::sort(numCopy.begin(), numCopy.end());

	for (size_t i = 0; i < numCopy.size(); i=i+2)
		if(numCopy[i] != numCopy[i+1])
			return numCopy[i];

//	std::set<int> set;
//	for (const int &num : numbers)
//	{
//		if (*(set.find(num)) == num)
//			set.erase(num);
//		else
//			set.insert(num);
//	}
//	std::cout << "size = "<< set.size() << "\n";
	return 0;
}

int findOdd2(const std::vector<int>& numbers)
{
	for (const int &elem : numbers)
	{
		if (std::count(numbers.begin(), numbers.end(), elem) % 2 != 0)
			return elem;
	}
	return 0;
}

int findOdd3(const std::vector<int>& numbers)
{
	int result = 0;
	for(auto& num : numbers)
		result = result ^ num;
	return result;
}

#include <vector>


int findOdd4(const std::vector<int>& numbers){
    std::unordered_map<int, int> m;
    for (const int  n: numbers)
        m[n]++;

    for (const auto& n: m)
        if (n.second % 2 != 0)
            return n.first;

    return 0;
}


//using V = std::vector<int>;
//
//Describe(FindOdd){
//  It(BasicTests){
//    Assert::That(findOdd(V{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}), Equals(5));
//    Assert::That(findOdd(V{1,1,2,-2,5,2,4,4,-1,-2,5}), Equals(-1));
//    Assert::That(findOdd(V{20,1,1,2,2,3,3,5,5,4,20,4,5}), Equals(5));
//    Assert::That(findOdd(V{10}), Equals(10));
//    Assert::That(findOdd(V{1,1,1,1,1,1,10,1,1,1,1}), Equals(10));
//  }
//};


#endif // DIFFICULTY_OF_TASKS_3FIND_THE_ODD_INT_H_ p
