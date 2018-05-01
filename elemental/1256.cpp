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
	int M, N;
	cin >> M >> N;
	ll K;
	ll d, x, y;
	K = ModInverse(M, N, d, x, y);
	cout << K <<endl;
	return 0;
}

