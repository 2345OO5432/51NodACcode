/*************************************************************************
    > Filename: 1069.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-30
 ************************************************************************/

// Nim Game, if a1^a2^...^an == 0, B win; else A win;
#include<iostream>
using namespace std;
void WhoWin(int P[], int N){
	int sum = 0;
	for (int i = 0; i != N; ++i){
		sum = sum ^ P[i];
	}
	cout << (sum ? 'A' : 'B') <<endl;
}
int main(){
	int N;
	cin >> N;
	int P[N];
	for (int i = 0; i != N; ++i){
		cin >> P[i];
	}
	WhoWin(P, N);
	return 0;
}
