#ifndef	_CATCHER_H_
#define _CATCHER_H_

#include "baseballplayer.h"

class Catcher : public BaseballPlayer
{
	public:
		void	play();
		Catcher(string name,int number);
		~Catcher(){}
};

#endif