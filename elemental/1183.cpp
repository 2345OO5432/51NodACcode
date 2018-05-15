/*************************************************************************
    > Filename: 1183.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-07
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int MAXLEN = 1001;
char s1[MAXLEN];
char s2[MAXLEN];
int mc[MAXLEN][MAXLEN];
void countLen(char s1[], char s2[]){
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 1; i != len1 + 1; ++i){
		mc[i][0] = i;
	}
	for (int i = 1; i != len2+1; ++i){
		mc[0][i] = i;
	}
	int cost, dele, ins, sub;
	for (int i = 1; i != len1+1; ++i){
		for(int j = 1; j != len2+1; ++j){
			cost = s1[i-1] == s2[j-1]? 0:1;
			dele = mc[i-1][j] + 1;
			ins = mc[i][j-1] + 1;
			sub = mc[i-1][j-1] + cost;
			mc[i][j] = min(min(dele, ins), sub);
		}
	}
	cout << mc[len1][len2] <<endl;
}
#if 0
int MinDist(string S1, string S2, int len1, int len2){
	if (len1 == 0 && len2 == 0){
		return 1;
	}
	if (len1 == 0){
		string::size_type pos = S2.find(S1.c_str());
		if (pos != string::npos){
			// cout <<len2 <<endl;
			return len2;
		}
		else {
			// cout <<len2+1<<endl;
			return len2 + 1;
		}
	}
	else if (len2 == 0){
		string::size_type pos = S1.find(S2.c_str());
		if (pos != string::npos){
			// cout <<len1<<endl;
			return len1;
		}
		else {
			// cout <<len1+1<<endl;
			return len1 + 1;
		}
	}
	else {
		if (S1[len1] == S2[len2]){
			// cout <<MinDist(S1, S2, len1 -1, len2 -1)<<endl;
			return MinDist(S1, S2, len1 -1, len2 -1);
		}
		else {
			// cout <<1+min(MinDist(S1, S2, len1, len2-1), MinDist(S1, S2, len1-1, len2))<<endl;
			return 1+min(min(MinDist(S1, S2, len1, len2-1), MinDist(S1, S2, len1-1, len2)), MinDist(S1, S2, len1-1, len2-1)) ;
		}
	}
}
#endif
int main(){
#if 0
	string S1, S2;
	cin >> S1 >> S2;
	int i = S1.size() - 1;
	int j = S2.size() - 1;
	cout << MinDist(S1, S2, i, j) <<endl;
#endif
	cin >> s1 >> s2;
	countLen(s1, s2);
	return 0;
}

