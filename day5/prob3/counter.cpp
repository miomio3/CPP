#include "counter.h"

int Counter::m_count = 0;

Counter::Counter(): num(0)
{
	
}

void Counter::reset(){
    num = 0;
}
void Counter::count(){
    num++;
	m_count++;
}
int Counter::getCount(){
    return num;
}

int Counter::getTotalCount()
{
	return (m_count);
}