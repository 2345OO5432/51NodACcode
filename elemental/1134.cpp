/*************************************************************************
    > Filename: 1049.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-27
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

ll maxlen( int A[], int low, int high ){
	if (high == low + 1){
		return 1;
	}
	else if ( high == low + 2 ){
		return (A[low] < A[low + 1]) ? 2:1;
	}
	else {
		int mid = (high + low) / 2;
		ll tmp = 1;
		for ( int i = mid -1 ; i >= low && A[i] > A[i-1]; --i ){
			tmp += 1;
		}
		for ( int i = mid -1; i < high - 1 && A[i] < A[i+1]; ++i ){
			tmp += 1;
		}
		return max(max(tmp, maxlen(A, low, mid)), maxlen(A, mid, high));
	}
}

int main(){
	int N;
	cin >>N;
	int A[N];
	for (int i = 0; i != N; ++i){
		cin >> A[i];
	}
	cout << maxlen(A, 0, N);
	// ll result = maxlen(A, 0, N);
	// cout << (result > 0 ? result : 0) <<endl;
	return 0;
}

