/*************************************************************************
    > Filename: 1079.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-30
 ************************************************************************/

#include<iostream>
typedef long long ll;
using namespace std;
void exGcd(ll a, ll b, ll &d, ll &x, ll &y){
	if ( b == 0 ){
		x = 1;
		y = 0;
		d = a;
	}
	else{
		exGcd(b, a%b, d, y, x);
		y -= x*(a/b);
	}
}
ll ModInverse(ll a, ll n, ll &d, ll &x, ll &y){
	exGcd(a, n, d, x, y);
	if (d != 1){
		return -1;
	}
	return (x < 0)? x+n : x;
}
int main(){
	int N;
	cin >> N;
	ll num[N][2];
	for ( int i = 0; i != N; ++i ){
		cin >> num[i][0] >> num[i][1];
	}
	ll M = 1;
	for (int i = 0; i != N; ++i){
		M *= num[i][0];
	}
	ll ret = 0;
	ll Mi, d, x, y;
	for ( int i = 0; i != N; ++i ){
		Mi = M / num[i][0];
		ret = (ret + num[i][1] *  Mi * ModInverse(Mi, num[i][0], d, x, y)) % M;
	}
	cout << ret <<endl;
	return 0;
}

