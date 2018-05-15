/*************************************************************************
    > Filename: 1092.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-15
 ************************************************************************/
// if s[0] ==  s[len -1], f[0, len-1] = f[1, len-2]
// else f[0, len - 1] = 1 + min(f[0, len -2], f[1, len-1])

#include<bits/stdc++.h>
using namespace std;
int A[1000][1000];

int Solve(string S){
	int len = S.size();
	for(int i = 0; i != len - 1; ++i){
		A[i][i+1] = S[i] != S[i+1];
	}
	A[len - 1][len - 1] = 0;
	for (int i = 2; i != len; ++i){
		for (int j = 0; j + i != len; ++j){
			if (S[j] == S[j+i]){
				A[j][j+i] = A[j+1][j+i-1];
			}
			else {
				A[j][j+i] = 1 + min(A[j][j+i-1], A[j+1][j+i]);
			}
		}
	}
	return A[0][len - 1];
}
int main(){
	string S;
	cin >> S;
	cout << Solve(S) <<endl;
	return 0;
}
