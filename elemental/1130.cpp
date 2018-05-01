/*************************************************************************
    > Filename: 1130.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-01
 ************************************************************************/

// or use Stirling’s formula
// log10(n!) = log10(sqrt(2∗pi∗n))+n∗log10(n/e)
#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
const double PI = acos(-1.0);
const double e  = exp(1);
ll biteOf(ll N){
	return ll(ceil(log10(sqrt(2.0*PI*N)) + N * log10(N/e)));
}

int main(){
	int T;
	cin >> T;
	int num[T];
	for ( int i = 0; i != T; ++i ){
		cin >> num[i];
	}
	for ( int i = 0; i != T; ++ i ){
		cout << biteOf(num[i]) <<endl;
	}
	return 0;
}
