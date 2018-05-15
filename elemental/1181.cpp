/*************************************************************************
    > Filename: 1181.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-07
 ************************************************************************/

#include<bits/stdc++.h>
const int MAXN = 1e6 + 160;
bool isprime[MAXN+1] = {false};
typedef long long ll;
using namespace std;
int Solve(int N){
	ll cnt = 0;
	ll i, j;
	isprime[1] = true;
	isprime[2] = false;
	for ( i = 2; i <= MAXN; ++i ){
		if (!isprime[i]){
			++cnt;
			if (!isprime[cnt] && i >= N){
				return i;
			}
			for ( j = i*i; j <= MAXN; j+=i ){
				isprime[j] =true;
			}
		}
	}
}
int main(){
	int N;
	cin >> N;
	cout <<Solve(N) <<endl;
	return 0;
}
