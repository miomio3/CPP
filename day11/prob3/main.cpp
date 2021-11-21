#include <iostream>
#include <string>
#include <vector>
using namespace std;

string	max(vector<string> v)
{
	vector<string> :: iterator	i;
	string						s;

	for(i = v.begin(); i != v.end(); i++)
	{
		if(s.length() < (*i).length())
			s = *i;	
	}
	return (s);
}

string	min(vector<string> v)
{
	vector<string> :: iterator	i;
	string						s;

	for(i = v.begin(), s = *i; i != v.end(); i++)
	{
		if(s.length() > (*i).length())
			s = *i;
	}
	return (s);
}

int	main(void)
{
	vector<string>	v;
	string			s;

	while(1)
	{
		cout << "単語を入力:";
		getline(cin, s);
		if(s == "\0")
			break;
		v.push_back(s);
	}
	cout << "最長の単語:" << max(v) << endl;
	cout << "最短の単語:" << min(v) << endl;
}