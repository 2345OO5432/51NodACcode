/*************************************************************************
    > Filename: 2133.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-02
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
	int N;
	cin >> N;
	ll a[N];
	for ( int i = 0; i != N; ++i ){
		cin >> a[i];
	}
	sort(a, a+N);
	ll sum = 0;
	ll tmp = 0;
	for (int i = 0; i != N; ++i ){
		tmp += a[i];
		sum += tmp;
	}
	cout << sum <<endl;
	return 0;
}

