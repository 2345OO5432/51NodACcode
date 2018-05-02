/*************************************************************************
    > Filename: 1344.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-02
 ************************************************************************/

#include<iostream>
typedef long long ll;
using namespace std;
int main(){
	ll n;
	cin >>n;
	ll eg[n];
	for(ll i = 0; i != n; ++i){
		cin >> eg[i];
	}
	ll least = 0;
	ll sum = 0;
	for (ll i = 0; i != n; ++i){
		sum += eg[i];
		if (sum < least){
			least = sum;
		}
	}
	cout << -least <<endl;
	return 0;
}
