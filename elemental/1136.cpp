/*************************************************************************
    > Filename: 1136.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-07
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#if 0
bool isprime(int N){
	for (int i = 2; i != int(sqrt(N) + 1); ++i){
		if (N % i ==0){
			return 0;
		}
	}
	return 1;
}
#endif
// Phi(mn) = Phi(m)Phi(n)
// if n = p^k, p is a prime, then, Phi(n) = (p-1)*p^(k-1)
int Eulor(int N){
    int ret=1,i;
    for(i=2;i*i<=N;i++)
    {
        if(N%i==0)
        {
            N /= i;
			ret *= i-1;
			while(N%i==0) {
				N /= i;
				ret *= i;
			}
        }
    }
    if ( N > 1 ) 
	  ret *= N-1;
    return ret;
#if 0
	if (isprime(N)){
		return N-1;
	}
	double eulo = N;
	for (int i = 2; i != int(N/2 + 1); ++i){
		if (N%i == 0 && isprime(i)){
			eulo *= (1.0 - 1.0 / i);
		}
	}
	return eulo;
#endif
}

int main(){
	int N;
	cin >> N;
	cout << Eulor(N) <<endl;
	return 0;
}

