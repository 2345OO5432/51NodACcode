/*************************************************************************
    > Filename: 1085.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-01
 ************************************************************************/

#include<iostream>
using namespace std;
typedef long long ll;
ll maxValue(ll DP[], ll W[], ll V[], ll Ws, int N){
	for ( int i = 1; i != N + 1; ++i ){
		for ( int j = Ws; j >= W[i]; --j ){
			if (DP[j-W[i]] + V[i] > DP[j]){
				DP[j] = DP[j-W[i]] + V[i];
			}
		}
	}
	return DP[Ws];
}
int main(){
	int N;
	ll Ws;
	cin >> N >> Ws;
	ll W[N+1], V[N+1];
	ll DP[Ws+1] = {0};
	for (int i = 1; i <= N; ++i){
		cin >> W[i] >> V[i];
	}
	cout << maxValue(DP, W, V, Ws, N ) << endl;
}
