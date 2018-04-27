/*************************************************************************
    > Filename: 1629.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-11
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

double PI = acos(-1.0);

int main(){
	double s;
	while (cin >> s){
		printf ("%.6lf\n", s*sqrt(s/(8*PI))/3);  
	}
	return 0;
}

