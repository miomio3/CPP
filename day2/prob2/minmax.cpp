#include "minmax.h"
#include <iostream>
using namespace std;
 
//  最大値を返す
int MinMax::max(int n1,int n2, int n3){
    int	re;

	re = n1;
	if(re < n2)
		re = n2;
	if(re < n3)
		re = n3;
	return (re);
}
//  最小値を返す
int MinMax::min(int n1,int n2, int n3){
    return -max(-n1, -n2, -n3);
}