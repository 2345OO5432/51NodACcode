/*************************************************************************
    > Filename: 1070.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-15
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[50];
void init(){
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i != 50; ++i)
	  a[i] = a[i-1] + a[i-2];
}

bool Judge(int N){
	for (int i = 1; i != 50; ++i){
		if (a[i] == N)
		  return 1;
	}
	return 0;
}

int main(){
	init();
	int T;
	cin >> T;
	int N;
	while(T--){
		cin >> N;
		if (Judge(N)){
			cout << "B" <<endl;
		}
		else {
			cout << "A" <<endl;
		}
	}
	return 0;
}
