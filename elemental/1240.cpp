/*************************************************************************
  > Filename: 1240.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-05-09
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#if 0
int isPrime(int N){
	if (N==2 || N==3){
		return 1;
	}
	for(int i = 2; i <= N / 2; ++i){
		if (N%i == 0){
			return 0;
		}
	}
	return 1;
}
inline bool SQ(int N){
	return N == int(sqrt(N)) * int(sqrt(N));
}
#endif
int Miu(int N){
	// if (isPrime(N)){
	//     return -1;
	// }
	int tmp = N;
	int cnt = 0;
	bool flag;
	for (int i = 2;  i * i <= N &&i <= tmp && tmp; ++i){
		if (tmp % i == 0){
			tmp /= i;
			++cnt;
			flag = false;
			while( tmp % i == 0 ){
				flag = true;
				++cnt;
				tmp /= i;
			}
			if (flag){
				return 0;
			}
			// if (isPrime(tmp)){
			//     ++cnt;
			//     break;
			// }
		}
	}
	if (tmp != 1){
		++cnt;
	}
	return (cnt %2) ? -1 : 1;
}
int main(){
	int N;
	cin >> N;
	cout << Miu(N) <<endl;
	return 0;
}
