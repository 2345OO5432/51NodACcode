/*************************************************************************
  > Filename: 1095.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-05-15
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
struct value{
	int sorted;
	int same;
};
map <string, value> Map;
int main(){
	int N;
	cin >> N;
	string S;
	string tmp;
	while (N--){
		cin >> S;
		tmp = S;
		sort(tmp.begin(), tmp.end());
		++Map[tmp].sorted;
		++Map[S].same;
	}
	cin >> N;
	while(N--){
		cin >> S;
		tmp = S;
		sort(tmp.begin(), tmp.end());
		cout << Map[tmp].sorted - Map[S].same <<endl;
	}
	return 0;
}

