#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <iostream>

class	Calculation
{
	public:
		void	setNumber1(int num);
		void	setNumber2(int num);
		int		getNumber1(void);
		int		getNumber2(void);
		int		add(void);
		int		sub(void);
	
	private:
		int	num1;
		int	num2;
};

#endif