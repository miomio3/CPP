#include "hoge.h"
#include <iostream>
 
using namespace std;

Hoge::Hoge()
{
	cout << "constructer" << endl;
}
 
void Hoge::foo()
{
    cout << "fooメソッド" << endl;
}

Hoge::~Hoge()
{
	cout << "destructer" << endl;
}