/*************************************************************************
    > Filename: 1091.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-13
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
bool cmp(pair<int , int > l1, pair<int , int > l2){
	return (l1.first != l2.first)?l1.first < l2.first : l1.second > l2.second;
}

/**< inline int getlen(pair<int, int>l1, pair<int,int>l2){ */
/**<     return (l1.second <= l2.second)? l1.second - l2.first : l2.second - l2.first; */
/**< } */

int main(){
	int N;
	int a1, a2;
	vector<pair<int, int> > L;
	cin >> N;
	for ( int i = 0; i != N; ++i ){
		cin >> a1 >> a2;
		L.push_back(make_pair(a1, a2));
	}
	sort(L.begin(), L.end(), cmp);

	vector<pair<int,int> >::iterator iter1;
	int max_len(0);
	int len(0);
	int right(0);
	for ( iter1 = L.begin(); iter1 != L.end(); ++iter1){
		len = min(right, iter1->second) - iter1->first;
		max_len = max(len, max_len);
		right = max(right, iter1->second);
	}
	cout << max_len <<endl;
	return 0;
}

