#include "calculation.h"
#include <iostream>

void	Calculation::setNumber1(int num)
{
	num1 = num;
}

void	Calculation::setNumber2(int num)
{
	num2 = num;
}

int		Calculation::getNumber1(void)
{
	return(num1);
}

int		Calculation::getNumber2(void)
{
	return(num2);
}

int		Calculation::add(void)
{
	return(num1 + num2);
}

int		Calculation::sub(void)
{
	return(num1 - num2);
}