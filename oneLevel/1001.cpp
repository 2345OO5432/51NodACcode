/*************************************************************************
    > Filename: 1001.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-03
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int BiSearch(int ivec[], int low, int high, int key){
	int left = low, right = high;
	int mid;
	while (left <= right){
		mid = left + (right-left)/2;
		if (ivec[mid] > key)
		  right = mid - 1;
		else if (ivec[mid] < key)
		  left = mid + 1;
		else
		  return mid;
	}
	return -1;
}
int main(){
	int K, N;
	cin >> K >> N;
	int ivec[N];
	for (int i = 0; i != N; ++i){
		cin >> ivec[i];
	}
	sort(ivec, ivec + N);
	bool noSolution = true;
	for (int i = 0; i != N && double(ivec[i]) < K / 2.0; ++i){
		int index = BiSearch(ivec, 0,  N-1, K-ivec[i]);
		if ( index == -1 || index == i ){
			continue;
		}
		noSolution = false;
		cout << ivec[i] << ' ' << ivec[index] <<endl;
	}
	if (noSolution){
		cout << "No Solution" <<endl;
	}
	return 0;
}


