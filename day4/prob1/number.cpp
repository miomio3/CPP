#include "number.h"
#include <iostream>
using namespace std;
 
//  二つの数値を設定
void Number::setNumbers(int n1, int n2)
{
    a = n1;
    b = n2;
}
int Number::getAdd()
{
    return a + b;
}

Number::Number() : a(0), b(0)
{
	cout << "CCarオブジェクト生成" << endl;
}

Number::~Number()
{
	cout << "CCarオブジェクト破棄" << endl;
}