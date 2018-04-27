/*************************************************************************
    > Filename: 1019.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-27
 ************************************************************************/

#include<iostream>
using namespace std;
int merge(int num[], int tmp[],int low, int mid, int high){
	int i = low, j = mid + 1, k = low;
	int cnt = 0;
	while ( i <= mid && j <= high ){
		if (num[i] <= num[j]){
			tmp[k++] = num[i++];
		}
		else{
			tmp[k++] = num[j++];
			cnt += j-k;
		}
	}
	while (i <= mid){
		tmp[k++] = num[i++];
	}
	while (j <= high){
		tmp[k++] = num[j++];
	}
	for ( i = low; i <= high; ++i ){
		num[i] = tmp[i];
	}
	return cnt;
}

int mergeSort(int num[], int tmp[], int low, int high){
	if ( low < high ){
		int mid = (low + high) / 2;
		int cnt = 0;
		cnt += mergeSort(num, tmp, low, mid);
		cnt += mergeSort(num, tmp, mid+1, high);
		cnt += merge(num, tmp, low, mid, high);
		return cnt;
	}
	return 0;
}

int main(){
	int N;
	cin >> N;
	int num[N];
	int tmp[N];
	for (int i = 0; i != N; ++i)
	  cin >> num[i];
	int sum = mergeSort(num, tmp, 0, N-1);
	cout << sum <<endl;
	return 0;
}

