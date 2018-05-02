/*************************************************************************
  > Filename: 1116.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-05-02
 ************************************************************************/

//由二项式定理，只需要各个位数之和整除，便整除
#include<iostream>
#include<string>
using namespace std;
int getv(char c){
	if('0'<=c && c<='9'){
		return c-'0';
	}
	return c-'A'+10;
}
int main(){
	string S;
	cin >> S;
	long long sum = 0;
	int bite = 0;
	for(string::iterator iter = S.begin(); iter != S.end(); ++iter){
		sum += getv(*iter);
		bite = max(bite, getv(*iter)+1);
	}
	int flag = true;
	for (int i = bite; i <= 36; ++i){
		if (sum % (i-1) == 0){
			cout << i <<endl;
			flag = false;
			break;
		}
	}
	if (flag){
		cout << "No Solution" <<endl;
	}
	return 0;
}

