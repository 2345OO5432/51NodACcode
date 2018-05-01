/*************************************************************************
    > Filename: 1008.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-30
 ************************************************************************/

#include<iostream>
typedef long long ll;
using namespace std;
ll modValve(int N, int P){
	ll S = 1;
	for ( ll i = 2; i <= N; ++i ){
		S = (S * (i % P)) % P;
	}
	return S;
}
int main(){
	int N, P;
	cin >> N >> P;
	cout << modValve(N, P)<<endl;
	return 0;
}
