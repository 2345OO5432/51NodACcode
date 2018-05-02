/*************************************************************************
    > Filename: 1138.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-02
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	bool NoSolution = true;
	for (int i = N-1; i > 1; --i){
		int a1 = (2 * N / i + 1 -i)/ 2;
		if (a1 <= 0){
			continue;
		}
		if ((2*a1 + i - 1)*i % N == 0){
			NoSolution = false;
			cout << a1 << endl;
		}
	}
	if (NoSolution){
		cout << "No Solution" <<endl;
	}
	return 0;
}
