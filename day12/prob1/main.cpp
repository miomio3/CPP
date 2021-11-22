#include <iostream>
#include <map>
#include <string>
using namespace std;

int	main(void)
{
	map<string, string>	m;
	string				en[] = {"cat", "dog", "bird", "tiger"};
	string				ja[] = {"猫", "犬", "鳥", "トラ"};
	int					i;
	string				s;

	for(i = 0; i < 4; i++)
		m[en[i]] = ja[i];
	while(1)
	{
		cout << "英語で動物の名前を入力してください：" ;
		getline(cin, s);
		if(s == "\0" || m[s] == "\0")
			break;
		cout << m[s] << "です。" << endl;
	}
	return(0);
}