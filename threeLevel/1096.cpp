/*************************************************************************
    > Filename: 1096.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-02
 ************************************************************************/
// 中位数
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
	int N;
	cin >> N;
	int dist[N];
	for (int i = 0; i != N; ++i){
		cin >> dist[i];
	}
	sort(dist, dist+N);
	// cout << dist[N/2-1]<<endl << dist[N/2] <<endl <<endl;
	int mid = dist[N/2];
	// cout <<mid<<endl;
	ll minlen = 0;
	for (int i = 0; i != N; ++i){
		minlen += abs(mid - dist[i]);
	}
	cout << minlen <<endl;
	return 0;
}

