/*************************************************************************
    > Filename: 1283.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-02
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
int minLen(int N){
	int sq = sqrt(N);
	for ( int i = sq; i >= 1; ++i  ){
		if(int(N/i) * i == N){
			return 2*(int(N/ i) + i);
		}
	}
	return 0;
}

int main(){
	int N;
	cin >> N;
	cout << minLen(N) <<endl;
}
