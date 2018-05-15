/*************************************************************************
    > Filename: 1010.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-14
 ************************************************************************/

#include<bits/stdc++.h>
typedef long long ll;
const int num = 50086;
const ll maxn = 1e18 + 999;
ll a[num];
int cnt = 0;
void init(){
	for (ll i = 1; i < maxn; i *= 2)
	  for(ll j = 1; i * j < maxn; j *= 3)
		for (ll k = 1; i *j * k < maxn; k*= 5)
		  a[cnt++] = i * j * k;
}

int main(){
	int T;
	std::cin >> T;
	init();
	std::sort(a, a+cnt);
	ll N;
	while (T--){
		std::cin >> N;
		ll l = 1, r = cnt, mid;
		while(l < r){
			mid = (l + r) >> 1;
			if (a[mid] >= N)
			  r = mid;
			else
			  l = mid + 1;
		}
		std::cout << a[l] <<std::endl;
	}
	return 0;
}
