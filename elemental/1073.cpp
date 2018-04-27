/*************************************************************************
    > Filename: 1073.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-27
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
void lastOne(int N, int K){
	// FIXME : timeout
	// F(0) = 0
	// F(n) = (F(n-1) + K) %n
	// cout << F(n) + 1;
	int last = 0;
	for ( int i = 2; i <= N; ++i ){
		last = (last + K) % i;
	}
	cout << last+1 <<endl;
#if 0
	vector<int> ivec;
	for (int i = 1; i <= N; ++i){
		ivec.push_back(i);
	}
	vector<int>::iterator  curIter;
	for (curIter = ivec.begin(); ivec.size() > 1; ){
		curIter = ivec.erase((curIter - ivec.begin() + K - 1) % ivec.size() + ivec.begin() );
		if (curIter == ivec.end()){
			curIter = ivec.begin();
		}
	}
	cout << *ivec.begin() <<endl;
#endif
}
int main(){
	int N, K;
	cin >> N >>K;
	lastOne(N, K);
	return 0;
}

