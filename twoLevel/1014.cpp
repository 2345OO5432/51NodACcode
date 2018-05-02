/*************************************************************************
    > Filename: 1014.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-02
 ************************************************************************/

#include<iostream>
using namespace std;
typedef long long ll;
inline bool modeq(ll X, ll P, ll A){
	return (X % P) * (X % P) % P == A;
}
int main(){
	ll P, A;
	cin >> P >> A;
	bool NoS = true;
	for (ll i = 0; i != P+1; ++i){
		if (modeq(i, P, A)){
			cout << i <<' ' ;
			NoS = false;
		}
	}
	if (NoS){
		cout << "No Solution" <<endl;
	}
	return 0;
}
