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

ll maxsum( int A[], int low, int high ){
	if (high == low + 1){
		return A[low];
	}
	else if ( high == low + 2 ){
		return max(A[low], max(A[low+1], A[low] + A[low+1]));
	}
	else {
		int mid = (high + low) / 2;
		ll tmp = 0;
		for ( int i = mid -1 ; i >= low && tmp + A[i] > tmp; --i ){
			tmp += A[i];
		}
		for ( int i = mid; i < high && tmp + A[i] > tmp; ++i ){
			tmp += A[i];
		}
		return max(max(tmp, maxsum(A, low, mid)), maxsum(A, mid, high));
	}
}

int main(){
	int N;
	cin >>N;
	int A[N];
	for (int i = 0; i != N; ++i){
		cin >> A[i];
	}
	ll result = maxsum(A, 0, N);
	cout << (result > 0 ? result : 0) <<endl;
	return 0;
}

