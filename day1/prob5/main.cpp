#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int	main(void)
{
	string	s1;
	string	s2;
	int		num1;
	int		num2;

	cout << "1つ目の数字:";
	cin >> s1;
	cout << endl;
	cout << "2つ目の数字:";
	cin >> s2;
	cout << endl;
	num1 = atoi(s1.c_str()) + atoi(s2.c_str());
	num2 = atoi(s1.c_str()) - atoi(s2.c_str());
	cout << s1 << " + " << s2 << " = " << num1 << endl;
	cout << s1 << " - " << s2 << " = " << num2 << endl;
	return(0);
}