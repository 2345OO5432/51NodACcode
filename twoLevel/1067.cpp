/*************************************************************************
    > Filename: 1067.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-02
 ************************************************************************/

// N % 7 == 0 or 2, B Win
// else, A win
#include<iostream>
using namespace std;
inline bool Awin(int N){
	return (!(N%7== 0 || N%7 ==2));
}
int main(){
	int T;
	cin >> T;
	int ivec[T];
	for (int i = 0; i != T; ++i){
		cin >> ivec[i];
	}
	for (int i = 0; i != T; ++i){
		if (Awin(ivec[i])){
			cout << 'A' <<endl;
			continue;
		}
		cout << 'B' <<endl;
	}
}

