/*************************************************************************
    > Filename: 1135.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-09
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1e5 + 1;
int fac[MAXN];
int P;
int facNum;

void getFac(int N, int &facNum){
	int tmp = N;
	int Sq = int(sqrt(N) + 1);
	for (int i = 2; i != Sq && i <= tmp; ++i){
		if ( tmp % i == 0 ){
			fac[++facNum] = i;
			while (tmp % i == 0){
				tmp /= i;
			}
		}
	}
	if (tmp != 1){
		fac[++facNum] = tmp;
	}
}
ll quickPow(ll x, ll n){
	ll reV = 1;
	while (n){
		if (n &1){
			reV *= x;
			reV %= P;
		}
		n >>= 1;
		x *= x;
		x %= P;
	}
	return reV;
}

int check(int g) {
    for (int i = 1; i <= facNum; i++)
        if (quickPow((long long)g, (long long)(P-1)/fac[i]) == 1)
            return 0;
    return 1;
}

int solve(int P) {
    for (int i = 2; i < P; i++)
        if (check(i)) return i;
    return 0;
}
int main(){
	cin >> P;
	getFac(P-1, facNum);
	cout << solve(P) <<endl;
	return 0;
}
