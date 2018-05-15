/*************************************************************************
    > Filename: 1298.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-07
 ************************************************************************/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll PtoLine(ll x0, ll y0, ll x1, ll y1, ll x, ll y, ll r){ 
	ll a, b, c;
	if (x0 == x1){
		a = 1;
		b = 0; 
		c = -x0;
	}
	else if (y0 == y1){
		a = 0; 
		b = 1;
		c = -y0;
	}
	else {
		a = y0 - y1;
		b = x1 - x0;
		c = x0*y1 - y0*x1;
	}
	ll d1 = a*x + b*y + c;
	d1 *= d1;
	ll d2 = (a*a+b*b)*r*r;
	if (d1 > d2){
		return 0;
	}
	else{
		ll a1 = (x-x0)*(x1-x0) + (y-y0)*(y1-y0);
		ll a2 = (x-x1)*(x0-x1) + (y-y1)*(y0-y1);
		if ( a1 > 0 && a2 > 0){
			return 1;
		}
		return 0;
	}
}
 
#define DIST(x1, x2, y1, y2) \
	(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)
void 
Judge(ll x0, ll y0, ll r, ll x1,
ll x2, ll x3, ll y1, ll y2, ll y3)
{
	ll d1 = DIST(x0, x1, y0, y1);
	ll d2 = DIST(x0, x2, y0, y2);
	ll d3 = DIST(x0, x3, y0, y3);
	ll R2 = r * r;
	if (d1 < R2 && d2 < R2 && d3 < R2){
		cout << "No" <<endl;
	}
	else if (d1 > R2 && d2 > R2 && d3 > R2){
		ll l1 = PtoLine(x1, y1, x2, y2, x0, y0, r);
		ll l2 = PtoLine(x1, y1, x3, y3, x0, y0, r);
		ll l3 = PtoLine(x2, y2, x3, y3, x0, y0, r);
		// cout << l1 <<endl <<l2 <<endl <<l3 <<endl;
		if (l1 || l2 || l3){
			cout << "Yes" <<endl;
		}
		else {
			cout << "No" <<endl;
		}
	}
	else {
		cout << "Yes" <<endl;
	}
}

int main(){
	ll T;
	cin >> T;
	ll C[T][3];
	ll P[T][3][2];
	for (ll i = 0; i != T; ++i){
		cin >> C[i][0] >> C[i][1] >> C[i][2] ;
		cin >> P[i][0][0] >> P[i][0][1];
		cin >> P[i][1][0] >> P[i][1][1];
		cin >> P[i][2][0] >> P[i][2][1];
	}
	for (ll i = 0; i != T; ++i){
		Judge(C[i][0], C[i][1], C[i][2], 
			  P[i][0][0], P[i][1][0], P[i][2][0],
			  P[i][0][1], P[i][1][1], P[i][2][1]);
	}
	return 0;
}

