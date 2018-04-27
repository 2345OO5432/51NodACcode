/*************************************************************************
    > Filename: 1347_1.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-12
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	while(cin >> s){
		string s1 = s.substr(0, s.size()/2);
		string s2 = s.substr(s.size()/2);
		if (s1 == s2){
			cout << "YES" <<endl;
			continue;
		}
		cout << "NO" <<endl;
	}
}


