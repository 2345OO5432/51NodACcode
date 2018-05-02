/*************************************************************************
    > Filename: 1381.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-02
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int T;
	cin >>T;
	int ivec[T];
	for (int i = 0; i != T; ++i){
		cin >> ivec[i];
	}
	for (int i = 0; i != T; ++i){
		cout << 2*ivec[i]<<endl;
	}
	return 0;
}

