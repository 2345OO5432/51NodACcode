/*************************************************************************
    > Filename: 1027.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-27
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void proc(string A, string B){
	string C(A.size() + B.size(), '0');
	int cot[A.size() + B.size()] = {0};

	int obite;
	for ( int i = 0; i != int(A.size() + B.size()); ++i ){
		obite = 0;
		for ( int j = 0; j <= i && j != (int)A.size(); ++j ){
			if (i - j < (int)B.size()){
				obite += (A[j] - '0') * (B[i-j] - '0'); 
			}
		}
		C[i] = (obite + cot[i] ) % 10 + '0';
		cot[i+1] = (obite + cot[i] ) / 10 ;
	}

	reverse(C.begin(), C.end());
	while (*C.begin() == '0'){
		C.erase(C.begin());
	}
	cout << C <<endl;
}

int main(){
	string A, B;
	cin >> A >> B;
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	proc(A, B);
	return 0;
}

