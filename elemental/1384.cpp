/*************************************************************************
    > Filename: 1384.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-07
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string S;
	cin >> S;
	int N = S.size();
	int ivec[N];
	for (int i = 0; i != N; ++i){
		ivec[i] = S[i] - '0';
	}
	sort(ivec, ivec + N);
	do {
		for (int i = 0; i != N; ++i){
			cout << ivec[i];
		}
		cout <<endl;
	}while(next_permutation(ivec, ivec + N));
	return 0;
}


