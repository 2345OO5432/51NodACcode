/*************************************************************************
    > Filename: 1013.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-02
 ************************************************************************/

//使用快速幂 3^0 + 3^1 + ... + 3^N = (3^(N+1) - 1 ) / 2
#include<iostream>
using namespace std;
typedef long long ll;
const int MODV = 1e9 + 7;
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
	int n = N+1;
	ll  d, x, y;
	ll rev2 = ModInverse(2, MODV, d, x, y) ;
	// cout << rev2 <<endl;
	ll result = 1, tmp = 3;
	while(n){
		if (n&1){
			tmp %= MODV;
			result *= tmp;
			result %= MODV;
		}
		tmp %= MODV;
		tmp *= tmp;
		n >>=1;
	}
	result = ((result-1) * rev2) % MODV;
	cout << result <<endl;
	return 0;
}

