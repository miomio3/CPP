#include <iostream>
#include <vector>
using namespace std;

int	max(vector<int> v)
{
	vector<int>::iterator	i;
	int						n;

	n = 0;
	for(i = v.begin(); i != v.end(); i++)
	{
		if(n < *i)
			n = *i;
	}
	return(n);
}

int	min(vector<int> v)
{
	vector<int>::iterator	i;
	int						n;

	n = 0;
	for(i = v.begin(); i != v.end(); i++)
	{
		if(n > *i)
			n = *i;
	}
	return (n);
}

int main(void)
{
	vector<int> v;
	int			n;

	while(1)
	{
		cout << "正の整数を入力:";
		cin >> n;
		if(n == -1)
			break;
		v.push_back(n);
	}
	cout << "最大値 : " << max(v) << endl;
	cout << "最小値 : " << min(v) << endl;
	return (0);
}