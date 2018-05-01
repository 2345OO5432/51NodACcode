/*************************************************************************
    > Filename: 1004.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-01
 ************************************************************************/

#include<iostream>
typedef long long ll;
using namespace std;
int mod(int N){
	ll tmp = N;
	ll result = 1;
	while(tmp){
		if (tmp & 1){
			result %= 10;
			N %= 10;
			result *= N;
		}
		N %= 10;
		N *= N;
		tmp >>= 1;
	}
	return result % 10;
}
int main(){
	int N;
	cin >> N;
	cout << mod(N) <<endl;
	return 0;
}

