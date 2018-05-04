/*************************************************************************
    > Filename: 1009.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-05
 ************************************************************************/

#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	ll N;
	cin >> N;
	ll sum = 0;
	ll base = 1;
	ll tmp = N;
	int tn;
	while ( tmp ){
		tn = tmp % 10;
		if ( tn==0 ){
			sum += N / (base * 10) * base;
		}
		else if ( tn > 1 ){
			sum += (N/(base * 10)  + 1) * base;
		}
		else {
			sum +=  N / (base * 10) * base + N % base  + 1;
		}
		base *= 10;
		tmp /= 10;
	}
	cout << sum <<endl;
	return 0;
}

