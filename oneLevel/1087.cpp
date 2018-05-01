/*************************************************************************
    > Filename: 1087.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-01
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#if 0
const int MAXN = 1e9 + 1;
bool isOne[MAXN] = {false};
void init(){
	int index = 1;
	for ( int i = 0; index + i <MAXN; i++ ){
		isOne[index + i] = true;
		index += i;
	}
}
#endif
// f(1) = 1
// f(n) = f(n-1) + n-1 = (n-1)*n / 2 + 1 = K
int isone(int K){
	int delta = int(sqrt(8*K-7));
	int n = (1+delta) / 2;
	return K == (n-1)*n / 2 + 1;
}
int main(){
	int T;
	cin >> T;
	int ivec[T];
	for (int i = 0; i != T; ++i){
		cin >>ivec[i];
	}
	for (int i = 0; i != T; ++i){
		cout << isone(ivec[i]) <<endl;
	}
	return 0;
}

