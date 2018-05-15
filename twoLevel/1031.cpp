/*************************************************************************
    > Filename: 1031.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-15
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1001];
const int MAXN = 1e9 + 7;
int main(){
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	for (int i = 3; i != 1001; ++i){
		a[i] = (a[i-1] + a[i-2]) % MAXN;
	}
	int N;
	cin >> N;
	cout << a[N] <<endl;
	return 0;
}

