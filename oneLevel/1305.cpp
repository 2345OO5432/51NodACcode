/*************************************************************************
    > Filename: 1305.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-04
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll func(int A[], int N){
	ll sum = 0;
	int flag = N;
	int tmp;
	for (int i = 0; i != flag;++ i){
		for (int j = i+1; j != flag; ++j){
			if ((tmp=(A[i]+A[j])/ (A[i]*A[j]))){
				sum += tmp;
			}
			else {
				flag = j;
				break;
			}
		}
	}
	return sum;
}
int main(){
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i != N; ++i){
		cin >> A[i];
	}
	sort(A, A+N);
	ll retv = func(A, N);
	cout << retv <<endl;
	return 0;
}

