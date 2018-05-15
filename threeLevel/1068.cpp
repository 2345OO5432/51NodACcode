/*************************************************************************
    > Filename: 1068.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-15
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
bool Judge(string S){
	int sum = 0;
	for(int i = 0; i != S.size(); ++i){
		sum += S[i] - '0';
	}
	return sum % 3;
}
int main(){
	int T;
	cin >> T;
	string S;
	while(T--){
		cin >> S;
		cout << (Judge(S) ? 'A' : 'B') <<endl;
	}
	return 0;
}
