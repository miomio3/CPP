#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int	main(void)
{
	string	s;
	int		num;

	cout << "数値を入力してください:";
	cin >> s;
	cout <<	s << endl;
	num = atoi(s.c_str()) * 2;
	cout << s << "を2倍した数は、" << num << "です\n";
	return(0);
}