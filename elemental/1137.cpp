/*************************************************************************
    > Filename: 1137.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-09
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define LEN 100
ll A[LEN][LEN];
ll B[LEN][LEN];
ll C[LEN][LEN];
int main(){
	int N;
	cin >> N;
	int i, j, k;
	for (i = 0; i != N; ++i){
		for (int j = 0; j!= N; ++j){
			cin >> A[i][j];
		}
	}
	for (i = 0; i != N; ++i){
		for (int j = 0; j!= N; ++j){
			cin >> B[i][j];
		}
	}
	for (i = 0; i != N; ++i){
		for(j = 0; j != N; ++j){
			for (k = 0; k != N; ++k){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	for(i = 0; i != N; ++i){
		for (j = 0; j != N; ++j){
			cout << C[i][j] <<' ' ;
		}
		cout <<endl;
	}
	return 0;
}
