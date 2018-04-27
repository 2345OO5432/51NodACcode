/*************************************************************************
    > Filename: 1081.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-27
 ************************************************************************/

#include<iostream>
#include<cstdlib>
using namespace std;
typedef long long ll;
void init(ll sum[], int vec[], int N){
	sum[0] = vec[0];
	for ( int i = 1; i != N + 1; ++i ){
		sum[i] = sum[i-1] + vec[i-1];
	}
}

int main(){
	int N;
	cin >> N;
	int vec[N];
	for ( int i = 0; i != N; ++i ){
		cin >> vec[i];
	}
	// ll *sum = (ll *) malloc (N* sizeof(ll));
	ll sum[N];
	init(sum, vec, N);
	int Q;
	cin >> Q;
	int loc[Q][2];
	for ( int i = 0; i != Q; ++i ){
		cin >> loc[i][0] >> loc[i][1];
	}
	for ( int i = 0; i != Q; ++i ){
		cout << (sum[loc[i][0] + loc[i][1]  -1] - sum[loc[i][0] - 1] ) <<endl;
	}
	return 0;
}

