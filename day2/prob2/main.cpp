#include <iostream>
#include "minmax.h"
 
using namespace std;
 
int main(){
    MinMax m;
    int a = 6;
    int b = 2;
	int	c = 5;
    cout << a << "と" << b << "と" << c << "のうち、最大のものは" << m.max(a,b,c) << endl;
    cout << a << "と" << b << "と" << c << "のうち、最小のものは" << m.min(a,b,c) << endl;
    return 0;
}