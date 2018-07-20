// SpeedCalculator.cpp : Basic calculator to convert from PPS 
// to Deg/s and RPM from console 

#include "stdafx.h"
#include <iostream>

int main()
{
	int loop = 2;
	double deg_pstep = 1.8/72;
	int micro_step;
	int PPS;
	
	while (loop!=0) //loop as long as the user wants to keep calculating values 
	{
		//take inputs
		if (loop == 2)
		{
			std::cout << "Enter degrees per step: ";
			std::cin >> deg_pstep;
			std::cout << "\nEnter micro step mode: ";
			std::cin >> micro_step;
		}
		std::cout << "\nEnter PPS: ";
		std::cin >> PPS;
		//perform conversion
		double deg_sec = PPS*(deg_pstep / micro_step);
		//output  values 
		std::cout << "Speed in Deg/s is: " << deg_sec;
		std::cout << "\nCalculate another speed? (1 for same parameters, 2 for new parameters, 0 for no)\n";
		std::cin >> loop;
	}
	return 0;
}

