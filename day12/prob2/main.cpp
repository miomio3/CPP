#include <iostream>
#include <set>
using namespace std;

int	main(void)
{
	char	c;
	set<char>	s;

	cout << "英単語を入力:";
	while(1)
	{
		c = getchar();
		if(c == '\n')
			break;
		s.insert(c);
	}
	set<char>::iterator i;
	for(i = s.begin(); i != s.end(); i++)
	{
		cout << *i << ' ';
	}
	cout << endl;
}