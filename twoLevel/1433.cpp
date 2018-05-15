/*************************************************************************
  > Filename: 1433.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-05-14
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int T;
	cin >> T;
	int N;
	int num5 = 0;
	int num0 = 0;
	while(T--){
		cin >> N;
		if (N== 5){
			++num5;
		}
		else {
			++ num0;
		}
	}
	if (num0 == 0 ){
		cout << -1 <<endl;
	}
	else if (num0 && num5 < 9){
		cout << 0 <<endl;
	}
	else{
		int num = num5/9 * 9;
		for(int i = 0; i != num; ++i){
			cout << 5;
		}
		for(int i = 0; i != num0; ++i){
			cout << 0;
		}
		cout <<endl;
	}
	return 0;
}
