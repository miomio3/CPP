#include <iostream>
#include <list>
using namespace std;

int	main(void)
{
	list<int>	lint;
	int			n;
	list<int>::iterator	i;

	while(1)
	{
		cout << "正の整数を入力:";
		cin >> n;
		if(n == -1)
			break;
		else
			lint.push_back(n);
	}
	for(i = lint.begin(); i != lint.end(); i++)
		cout << *i << endl;
	return (0);
}