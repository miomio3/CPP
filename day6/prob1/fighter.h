#ifndef _FIGHTER_H_
#define _FIGHTER_H_

#include "airplane.h"
#include <iostream>
using namespace std;

class Fighter : public Airplane
{
	public:
		void	fight(void);
};

#endif