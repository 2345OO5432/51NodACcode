/*************************************************************************
  > Filename: 1049.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-04-27
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int BiSearch(int B[], int len, int w)
{
	int left = 0, right = len - 1;
	int mid;
	while (left <= right){
		mid = left + (right-left)/2;
		if (B[mid] > w)
		  right = mid - 1;
		else if (B[mid] < w)
		  left = mid + 1;
		else
		  return mid;
	}
	return left;
}
// 可排序后化为找最长公共子序列
ll maxlen( int A[], int B[], int N ){
	int len = 1;  
	B[0] = A[0];  
	int i, pos = 0;  

	for(i=1; i != N; ++i)   {  
		if(A[i] > B[len-1]) {  
			B[len] = A[i];  
			++len;  
		}  
		else {  
			pos = BiSearch(B, len, A[i]); //二分查找需要插入的位置  
			B[pos] = A[i];  
		}  
	}  
	return len;  
}  
#if 0
// FIXME timeout
int len[N];
for ( int i = 0; i != N; ++i ){
	len[i] = 1;
}
for ( int i = 1; i != N; ++i ){
	for ( int j = 0; j != i; ++j ){
		if ( A[i] > A[j] && len[i] < len[j] + 1 ){
			len[i] = len[j] + 1;
		}
	}
}
int maxlen = 0;
for ( int i = 0; i!= N; ++i ){
	maxlen = len[i] > maxlen ? len[i] : maxlen;
}
return maxlen;
#endif
#if 0
// ERROR
vector<int> ivec;
ivec.push_back(A[0]);
for ( int i = N; i != N; ++i ){
	if ((ivec.size() == 1 && A[i] < *ivec.begin()) || (ivec.size() > 1 && A[i] > *(ivec.rbegin() - 1)&& 
					A[i] < *ivec.rbegin())){
		*ivec.rbegin() = A[i];
	}
	else if ( A[i] > *ivec.rbegin() ){
		ivec.push_back(A[i]);
	}
	else{
		continue;
	}
}
return ivec.size();
#endif 
#if 0
// ERROR
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
#endif

int main(){
	int N;
	cin >>N;
	int A[N];
	int B[N];
	for (int i = 0; i != N; ++i){
		cin >> A[i];
	}
	cout << maxlen(A, B,  N) <<endl;
	// ll result = maxlen(A, 0, N);
	// cout << (result > 0 ? result : 0) <<endl;
	return 0;
}

