/*************************************************************************
    > Filename: 1072.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-30
 ************************************************************************/

//奇异局势
// ak = [k * (1 + sqrt(5)) / 2]
// bk = ak + k;
// 如果是, B Win, else, A win
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
double T = (sqrt(5) + 1.0) / 2;
void whoWin( int minV, int maxV ){
	int K = maxV - minV;
	if (int(K * T) == minV){
		cout << 'B' <<endl;
		return ;
	}
	cout << 'A' <<endl;
#if 0
	// ERROR
	if ((minV == 1 && maxV == 2)||(minV > 2 && maxV == 2*minV -1)){
		cout << 'B' <<endl;
		return ;
	}
	cout << 'A' <<endl;
#endif
}
int main(){
	int T;
	cin >> T;
	int num[T][2];
	for (int i = 0; i != T; ++i){
		cin >> num[i][0] >> num[i][1];
	}
	for (int i = 0; i != T; ++i){
		whoWin(min(num[i][0], num[i][1]), max(num[i][0], num[i][1]));
	}
	return 0;
}

