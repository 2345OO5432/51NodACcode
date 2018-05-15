/*************************************************************************
    > Filename: 1089.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-05
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
inline void addchar(string &S){
	for(string::iterator iter = S.begin(); iter < S.end(); iter += 2){
		iter = S.insert(iter, '#');
	}
	S += "#";
}
int manacher(string S){
	int RL[S.size()];
	int MaxRight = 0, pos = 0, MaxLen = 0;
	for ( int i = 0; i != int(S.size()); ++i ){
		if ( i < MaxRight ){
			RL[i] = min(RL[2*pos - i], MaxRight - i);
		}
		else {
			RL[i] = 1;
		}
		while ( i - RL[i] >= 0 && i + RL[i]  < int(S.size())  && S[i-RL[i]] == S[i+RL[i]] ){
			++RL[i];
		}
		if (RL[i] + i - 1 > MaxRight){
			MaxRight =  RL[i] + i - 1;
			pos = i;
		}
		MaxLen = max(MaxLen, RL[i]);
	}
	return MaxLen - 1;
}
int main(){
	string S;
	cin >> S;
	addchar(S);
	cout << manacher(S) <<endl;
	return 0;
}
