#include <iostream>
#include <cassert>


int main()
{
	int weight;
	int height;

	std::cout << "Print your weight in Kg ";
	std::cin  >> weight;

	std::cout << "Print your height in meters ";
	std::cin  >> height;

	int BMI;

	BMI = weight / (height * height);
	
	std::cout << "The Body Mass Index " << BMI << std::endl;
	std::cout << "BMI VALUES " << std::endl;
	std::cout << "Underweight: less than 18.5 " << std::endl;
	std::cout << "Normal:      between 18.5 and 24.9 " << std::endl;
	std::cout << "Overweight:  between 25 and 29.9 " << std::endl;
	std::cout << "Obese:       30 or greater"  << std::endl;

	return 0;
}
