/*************************************************************************
  > Filename: 1185.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-05-08
 ************************************************************************/
/*
 * 同样是奇异局问题
 * 记 Phi = (1+sqrt(5)) / 2, 黄金分割数
 * ak = [k*Phi], bk = ak+k
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll Gold[3] = {618033988, 749894848, 204586834};
const ll MOD = 1000000000;
// double Phi = (1+sqrt(5))/2;
void Solve(ll a, ll b){
	ll dist = a - b;
	ll pre = dist / MOD, las = dist % MOD;
	ll a1 = las * Gold[2];
	ll a2 = pre * Gold[2] + las * Gold[1] + a1 / MOD;
	ll a3 = pre * Gold[1] + las * Gold[0] + a2 / MOD;
	ll a4 = dist + pre * Gold[0] + a3 / MOD;
	cout << (a4 == b ? 'B' : 'A') << endl;
#if 0
	ll k = ll(ceil(ak / Phi));
	if (bk == ak+k){
		cout << "B" <<endl;
	}
	else {
		cout << "A" <<endl;
	}
#endif
}
int main(){
	int T;
	// cout << Phi<<endl;
	cin >> T;
	ll ab[T][2];
	for (int i = -0; i != T; ++i){
		cin >> ab[i][0] >> ab[i][1] ;
	}
	for (int i = 0; i != T; ++i){
		Solve(max(ab[i][0], ab[i][1]), min(ab[i][0], ab[i][1]));
	}
}
