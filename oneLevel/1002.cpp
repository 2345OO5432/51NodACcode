/*************************************************************************
  > Filename: 1002.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-05-04
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N; cin >> N;
	int ivec[N][N] = {0};
	// memset(ivec, 0, N*N*sizeof(int));
	for(int i = 0; i != N; ++i){
		for (int j = 0; j != i + 1; ++j){
			cin >> ivec[i][j];
		}
	}
	for ( int i = N - 2; i >= 0; --i ){
		for (int j = 0; j <= i; j++){
			ivec[i][j] += max(ivec[i+1][j], ivec[i+1][j+1]);
		}
	}
	cout << ivec[0][0] <<endl;
	return 0;
}

