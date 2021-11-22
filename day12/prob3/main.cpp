#include <iostream>
#include <string>
#include <queue>
using namespace std;

int	main(void)
{
	string					s;
	priority_queue<string, vector<string>, greater<string> >	q;

	while(1)
	{
		cout << "文字列を入力:";
		getline(cin, s);
		if(s == "")
			break;
		q.push(s);
	}
	while(q.empty() == false)
	{
		cout << q.top() << endl;
		q.pop();
	}
	return(0);
}