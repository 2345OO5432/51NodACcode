/*************************************************************************
  > Filename: 1284.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-03-16
 ************************************************************************/

#include<iostream>
long long single(  long long N);
long long cdouble(  long long N);
long long three(  long long N);
long long four(  long long N);
using namespace std;
int main(){
	long long N;
	long long num;
	cin >> N;
	num = N - single( N) + cdouble(N) - three(N) + four(N);
	cout << num <<endl;
	return 0;
}

long long single( long long N){
	return (N / 2 + N / 3 + N / 5 + N / 7);
}

long long cdouble( long long N){
	return (N / (2*3) + N/ (2*5) + N / (2*7) + N/(3*5) + N/(3*7) + N/(5*7));
}

long long three( long long N){
	return (N /(2*3*5) + N / (2*3*7) + N/(2*5*7) + N/(3*5*7));
}

long long four( long long N){
	return N / (2*3*5*7);
}
