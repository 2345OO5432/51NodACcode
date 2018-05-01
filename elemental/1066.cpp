/*************************************************************************
    > Filename: 1066.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-29
 ************************************************************************/

// 谁先让棋子数目变为 nK + n 谁赢，因此
// if N = n(k+1), B win
// else, A win
#include<iostream>
using namespace std;
void whoWin(int N, int K){
	if ((N/(K+1)) * (K+1) == N){
		cout << 'B' <<endl;
		return;
	}
	cout << 'A' <<endl;
}
int main(){
	int T;
	cin >> T;
	int num[T][2];
	for (int i = 0; i != T; ++i){
		cin >> num[i][0] >> num[i][1];
	}
	for ( int i = 0; i != T; ++i ){
		whoWin(num[i][0], num[i][1]);
	}
	return 0;
}
