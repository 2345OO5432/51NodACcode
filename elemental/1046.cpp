/*************************************************************************
    > Filename: 1046.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-27
 ************************************************************************/

#include<iostream>
using namespace std;
long long powMod(long long A, long long B, long long C){
	// A^B % C
	long long result = 1;
	while ( B ){
		if ( B & 1 ){
			result %= C;
			A %= C;
			result *= A;
		}
		A %= C;
		A *= A;
		B >>= 1;
	}
	return result % C;
}

int main(){
	long long A, B, C;
	cin >> A >> B >> C;
	cout << powMod(A, B, C) <<endl;
	return 0;
}
