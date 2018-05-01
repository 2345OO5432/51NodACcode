/*************************************************************************
    > Filename: 1003.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-01
 ************************************************************************/

#include<iostream>
using namespace std;
int zeroNum(int N){
	if ( N < 5 ){
		return 0;
	}
	return N/ 5 + zeroNum(N/5);
}
int main(){
	int N;
	cin >> N;
	cout << zeroNum(N) <<endl;
	return 0;
}

