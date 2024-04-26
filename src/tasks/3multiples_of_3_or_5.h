/*
 * 3multiples_of_3_or_5.h
 *
 *  Created on: 30 авг. 2023 г.
 *      Author: ivan-
 *
 *	If we list all the natural numbers below 10 that are multiples of 3 or 5,
 *	we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *	Finish the solution so that it returns the sum of all the multiples
 *	of 3 or 5 below the number passed in.
 *
 *	Additionally, if the number is negative, return 0.
 *	Note: If the number is a multiple of both 3 and 5, only count it once.
 *
 *
 *
 *	Если мы перечислим все натуральные числа до 10, кратные 3 или 5,
 *	мы получим 3, 5, 6 и 9. Сумма этих кратных равна 23.
 *	Завершите решение так, чтобы оно вернуло сумму всех чисел,
 *	кратных 3 или 5, ниже введенного числа.
 *
 *	Кроме того, если число отрицательное, верните 0.
 *	Примечание. Если число кратно 3 и 5, посчитайте его только один раз.
 */

#ifndef DIFFICULTY_OF_TASKS_3MULTIPLES_OF_3_OR_5_H_
#define DIFFICULTY_OF_TASKS_3MULTIPLES_OF_3_OR_5_H_


int multiplesOf3or5 (int number)
{
	int result = 0;
	for (int i = 3; i < number; i++)
		if (!(i % 3) || !(i % 5))
			result+= i;
	return result;
}



//Describe(solution_algorithm)
//{
//    It(should_handle_basic_test_cases)
//    {
//        Assert::That(solution(10), Equals(23));
//    }
//};

#endif /* DIFFICULTY_OF_TASKS_3MULTIPLES_OF_3_OR_5_H_ */
