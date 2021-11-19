#include "data.h"
using namespace std;
 
void CData::init()
{
    number = 0;
    comment = "";
}

void CData::setNumber(int num)
{
	number = num;
}

int CData::getNumber(void)
{
	return number;
}

void CData::setComment(string com)
{
	comment = com;
}

string CData::getComment(void)
{
	return comment;
}

