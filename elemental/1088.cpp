/*************************************************************************
    > Filename: 1088.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-01
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int max_len(string S){
	int N = S.size();
	bool is_true[N][N] = {false};
	int len = 0;
	for ( int i = 0; i != N; ++i ){
		for (int j = 0; j != i+1; j++){
			if ( i - j < 2 ){
				is_true[j][i] = (S[i] == S[j]);
			}
			else {
				is_true[j][i] = (S[i] == S[j] && is_true[j+1][i-1]);
			}
			if (is_true[j][i] && len < (i - j +1)){
				len = i - j + 1;
			}
		}
	}
	return len;
}
int main(){
	string S;
	cin >> S;
	cout << max_len(S) <<endl;
	return 0;
}
