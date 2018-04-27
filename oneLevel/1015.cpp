/*************************************************************************
    > Filename: 1015.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-12
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
int coun(int n);
int getbite(int n){
	int bite = 0;
	while(n){
		++bite;
		n /= 10;
	}
	return bite;
}

int main(){
	int n;
	cin >> n;
	for ( int i = n; ; ++i){
		if (coun(i)){
			cout << i<<endl;
			break;
		}
	}
	return 0;
}

int coun(int n){
	int bite = getbite(n);
	int bites[bite];
	int tmp = n;
	/**< cout << tmp; */
	/**< return 1; */
	for ( int i = 0; i != bite; ++i ){
		bites[i] = tmp / int (pow(10, bite - i - 1));
		tmp -= bites[i] * int(pow(10, bite - i - 1));
		/**< cout << bites[i] << endl; */
	}
	/**< return 1; */
	int sum = 0;
	for (int i = 0; i != bite; ++i){
		sum += int(pow(bites[i], bite));
	}
	if (sum == n){
		return 1;
	}
	return 0;
}
