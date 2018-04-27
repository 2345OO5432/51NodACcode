/*************************************************************************
    > Filename: 1082.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-13
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;

const int MAXN = 1e6 + 1;
bool is_seven[MAXN];
ll sum[MAXN];

void juedge_seven(){
	memset(is_seven, false, sizeof(is_seven));
	for ( int i = 7; i <= MAXN; i += 7 ){
		is_seven[i] = true;
	}
	int r;
	for (int i = 1; i <= MAXN; i *= 10){
		r = i * 10;
		for ( int j = i * 7; j <= MAXN; j += r ){
			for ( int k = 0; k != i; ++k ){
				is_seven[k+j] = true;
			}
		}
	}
}

void getsum(){
	sum[0] = 0;
	for (ll i = 1; i <= MAXN; ++i){
		if (!is_seven[i]){
			sum[i] = sum[i-1] + i * i;
		}
		else{
			sum[i] = sum[i - 1];
		}
	}
}

int main(){
	juedge_seven();
	getsum();
	int T, N;
	cin >> T;
	while ( T-- ){
		cin >> N;
		cout << sum[N] <<endl;
	}
	return 0;
}
