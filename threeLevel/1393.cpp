/*************************************************************************
    > Filename: 1393.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-05
 ************************************************************************/

/* 使用动态规划
 *令F(i) = 以A[i] 结尾的个数相等的子串的长度
 *则 if A[i+1] != A[i-F[i]] 则 F[i+1] = F[i] + 2;
 *xx   else F[i+1] = F[i]
 */
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
// typedef long long ll;
using namespace std;
int GetMaxLen(string A){
	map <int, int> mp;
	int i;
	int MaxLen = 0;
	int sum = 0;
	for ( i = 0; i != int(A.size()); ++i ){
		if ( A[i] - '0' ){
			++ sum;
		}
		else {
			--sum;
		}
		if ( !sum ){
			MaxLen = i + 1;
		}
		else{
			if (mp[sum]){
				MaxLen = max(MaxLen, i - mp[sum]);
			}
			else {
				mp[sum] = i;
			}
		}
	}
	return MaxLen;
#if 0
	int F[N];
	int i;
	int MaxLen = 0;
	F[0] = 0;
	for ( i = 1; i != N; ++i ){
		if ( i - 1 - F[i-1] >= 0 && A[i] != A[i-1-F[i-1]]){
			F[i] = F[i-1] + 2;
		}
		else {
			int pos = i - F[i-1];
			int flag = 1;
			while (flag && pos < i){
				if (A[pos] == A[i]){
					--flag;
				}
				else {
					++flag;
				}
				++pos;
			}
			if (i == pos){;
				F[i] = 0;
			}
			else {
				F[i] = i - pos + 1;;
			}
		}
		// cout << "F[i] = " << F[i] <<endl;
		MaxLen = max(F[i], MaxLen);
	}
	return MaxLen;
#endif
}

int main(){
	string A;
	cin >> A;
	cout << GetMaxLen(A) <<endl;
	return 0;
}
