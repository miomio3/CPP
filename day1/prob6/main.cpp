#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int	main(void)
{
	string	sei;
	string	mei;
	cout << "姓を入力:";
	cin >> sei;
	cout << endl;
	cout << "命を入力:";
	cin >> mei;
	cout << endl;
	cout << "名前は" << "「" << sei << " " << mei << "」" << "です。" << endl;
	return(0);
}