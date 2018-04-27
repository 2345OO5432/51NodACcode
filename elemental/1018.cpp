/*************************************************************************
    > Filename: 1018.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-26
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> ivec;
	int n;
	int v;
	cin >> n;
	for (int i = 0; i != n; ++i){
		cin >> v;
		ivec.push_back(v);
	}
	sort(ivec.begin(), ivec.end());
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter){
		cout << *iter <<endl;
	}
	return 0;
}

