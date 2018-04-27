/*************************************************************************
    > Filename: 1106.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-27
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#if 0
#define MAXN 1e9
bool not_prime[int(MAXN)] = {false};
void label( bool not_prime[] ){
	int i, j;
	// int curprime;
	for ( i = 2; i <= MAXN / 2; ++ i ){
		if (not_prime[i-1])
		  continue;
		for ( j = i; j <= MAXN; j *= 2 ){
			not_prime[j -1] = true;
		}
	}
}
#endif
bool is_prime(int n){
	for ( int i = 2; i <= sqrt(n) ; ++i ){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	// label(not_prime);
	int N;
	cin >> N;
	int num[N];
	for (int i = 0; i != N; ++i){
		cin >> num[i];
	}
	for ( int i = 0; i != N; ++i ){
		cout << (is_prime(num[i]) ? "Yes" : "No") <<endl;
	}
	return 0;
}
