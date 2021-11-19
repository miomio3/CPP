#include <string.h>
#include <iostream>
#include "twostrings.h"
using namespace std;

void TwoStrings::setString1(string s)
{
	m_string1 = s;
}

void TwoStrings::setString2(string s)
{
	m_string2 = s;
}
string TwoStrings::getString1()
{
	return(m_string1);
}

string TwoStrings::getString2()
{
	return(m_string2);
}

string TwoStrings::getConnectedString()
{
	string	s;
	s.append(m_string1);
	s.append(m_string2);
	return(s);
}

int TwoStrings::getConnectedLength()
{
	int	len;

	len = m_string1.length() + m_string2.length();
	return(len);
}