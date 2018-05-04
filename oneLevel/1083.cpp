/*************************************************************************
    > Filename: 1083.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-04
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#if 0
void printM(int matrix[3][3]){
	for (int i = 0; i != 3; ++i){
		for (int j = 0; j != 3; ++j){
			cout << matrix[i][j]<< ' ' ;
		}
		cout <<endl;
	}
}
#endif
int main(){
	int N ;
	cin >> N;
	int ivec[N][N];
	for (int i = 0; i != N; ++i){
		for ( int j = 0; j != N; ++j ){
			cin >> ivec[i][j];
		}
	}
	// cout <<endl;
	// printM(ivec );
	for (int i = N-2; i >= 0; --i){
		ivec[i][N-1] += ivec[i+1][N-1];
		ivec[N-1][i] += ivec[N-1][i+1];
	}
	for (int i = N- 2; i >= 0; --i){
		for (int j = N-2; j >= 0; --j ){
			ivec[i][j] += max(ivec[i+1][j], ivec[i][j+1]);
		}
	}
	// printM(ivec);
	cout << ivec[0][0] <<endl;
	return 0;
}

