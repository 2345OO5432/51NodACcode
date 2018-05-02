/*************************************************************************
    > Filename: 1118.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-01
 ************************************************************************/

#include<iostream>
using namespace std;
typedef long long ll;
const int P = 1e9 + 7;
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
ll waysum(int M, int N){
	ll d, x, y;
	ll sum = 1;
	for (int i = 2; i < M; i++){
		sum =  (sum *ModInverse(i, P, d, x, y)) % P;
	}
	for ( int i = N; i <= M+N-2; i++){
		sum = (sum * i) % P;
	}
	return sum;
// 总共需要向下走M-1 步，向右走N-1步，因此，总走法为C(M+N-2, M-1)
#if 0
	if (M == 1 || N == 1){
		return 1;
	}
	else{
		return waysum(M-1, N) % P + waysum(M, N-1) %P;
	}
#endif
}

int main(){
	int M, N;
	cin >> M >> N;
	cout << waysum( M, N ) <<endl;
	return 0;
}
