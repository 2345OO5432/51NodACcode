/*************************************************************************
    > Filename: 1058.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-29
 ************************************************************************/

// log10(N!) = log10(2) + log10(3) + ... + log10(N)
// or use Stirling’s formula
// log10(n!) = log10(sqrt(2∗pi∗n))+n∗log10(n/e)
#include<iostream>
#include<cmath>
using namespace std;
int bitsum(int N){
	if ( N == 1 ){
		return 1;
	}
	// 不能使用 float，精度太低当N较大时候计算结果出错
	double sum = 0.0;
	for ( int i = 1; i <= N; ++i ){
		sum += log10(i);
	}
	return int(ceil(sum));
}
int main(){
	int N;
	cin >> N;
	cout << bitsum(N) <<endl;
	return 0;
}

