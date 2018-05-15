/*************************************************************************
    > Filename: 1062.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-14
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 1;
int maxV[MAXN];
int vec[MAXN];

void init(){
	vec[0] = 0;
	vec[1] = 1;
	maxV[0] = 0;
	maxV[1] = 1;
	for(int i = 2; i != MAXN; ++i){
		if (i % 2 == 0){
			vec[i] = vec[i/2];
			maxV[i] = max(maxV[i-1], vec[i]);
		}
		else{
			vec[i] = vec[i/2] + vec[i/2 + 1];
			maxV[i] = max(maxV[i-1], vec[i]);
		}
	}
}
int main(){
	init();
	int T;
	cin >> T;
	int N;
	while(T--){
		cin >> N;
		cout << maxV[N] <<endl;
	}
	return 0;
}

