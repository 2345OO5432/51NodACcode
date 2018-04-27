/*************************************************************************
    > Filename: 1080.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-13
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int N;
	cin >> N;
	int sqrtn = sqrt( N / 2 ) + 1;
	int flag(0);
	for (int i = 0; i != sqrtn; ++i ){
		int tmp = sqrt(N - i*i);
		if ( i * i + tmp * tmp == N ){
			flag = 1;
			cout << i << ' ' << tmp << endl;
		}
	}
	if ( !flag ){
		cout << "No Solution" <<endl;
	}
	return 0;
}


