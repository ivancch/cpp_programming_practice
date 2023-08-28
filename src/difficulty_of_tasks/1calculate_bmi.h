/*
 * 1calculate_BMI.h
 *
 *  Created on: 27 авг. 2023 г.
 *      Author: ivan-
 *
 *	Write function bmi that calculates body mass index (bmi = weight / height2).
 *
 *	if bmi <= 18.5 return "Underweight"
 *	if bmi <= 25.0 return "Normal"
 *	if bmi <= 30.0 return "Overweight"
 *	if bmi > 30 return "Obese"
 */

#ifndef DIFFICULTY_OF_TASKS_1CALCULATE_BMI_H_
#define DIFFICULTY_OF_TASKS_1CALCULATE_BMI_H_

#include <string>

std::string bmi(double w, double h)
{
	double bmiRes = w / h / h;
	std::cout << bmiRes << std::endl;
	if (bmiRes <= 18.5) return "Underweight";
	if (bmiRes <= 25.0) return "Normal";
	if (bmiRes <= 30.0) return "Overweight";
	return "Obese";

  throw std::logic_error("Method or operation is not implemented");
}


//Describe(simple_tests)
//{
//  It(should_pass_all_simple_tests)
//  {
//    Assert::That(bmi(81.585, 2.1), Equals("Underweight"));
//    Assert::That(bmi(90.25, 1.9), Equals("Normal"));
//    Assert::That(bmi(86.7, 1.7), Equals("Overweight"));
//    Assert::That(bmi(200, 1.6), Equals("Obese"));
//  }
//};


#endif /* DIFFICULTY_OF_TASKS_1CALCULATE_BMI_H_ */
