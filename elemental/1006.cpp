/*************************************************************************
    > Filename: 1006.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-04-27
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
static string S;
void coutLen(string A, string B, int **a, int **b){
	// b record the search path for output string
	string::size_type i, j;
	for (i = 0 ; i <= A.size(); ++i){
		// a[i][0] = 0;
		*( (int *)a + i *(B.size() + 1)) = 0;
	}
	for (i = 0; i <= B.size(); ++i){
		// a[0][i] = 0;
		*((int *)a + i) = 0;
	}
	for (i = 1; i <= A.size(); ++i){
		for ( j = 1; j <= B.size(); ++j ){
			if (A[i-1] == B[j-1]){
				// a[i][j] = a[i-1][j-1] + 1;
				// b[i][j] = 0;
				*((int *)a + i *(B.size() + 1) + j) = *((int *)a + (i-1)*(B.size() + 1) + j -1) + 1; 
				*((int *)b + i *(B.size() + 1) + j) = 0;
			}
			else if ( /*a[i-1][j] > a[i][j-1]*/ *((int *)a+(i-1)*(B.size() + 1) + j) > *((int *)a+i*(B.size() + 1)+j-1)){
				// a[i][j] = a[i-1][j];
				// b[i][j] = 1;
				*((int *)a + i *(B.size() + 1) + j) = *((int *)a + (i-1)*(B.size() + 1) + j ) ; 
				*((int *)b + i *(B.size() + 1) + j) = 1;
			}
			else{
				// a[i][j] = a[i][j-1];
				// b[i][j] = -1;
				*((int *)a + i *(B.size() + 1) + j) = *((int *)a + i*(B.size() + 1) + j  - 1) ; 
				*((int *)b + i *(B.size() + 1) + j) = -1;
			}
		}
	}
}
void putstr(string A, int bsize, int **b, string::size_type i, string::size_type j){
	if ( i == 0 || j == 0 ){
		return;
	}
	else if (*((int *)b + i*(bsize + 1) + j)== 0){
		putstr(A,bsize, b, i-1, j-1);
		cout << A[i -1];
	}
	else if (*((int *)b + i*(bsize + 1) + j)== 1){
		putstr(A,bsize, b, i-1, j);
	}
	else{
		putstr(A,bsize, b, i, j-1);
	}
}
#if 0
string getstr(string A, string B, string::size_type locA, string::size_type locB){
	//FIXME , timeout
	if (locA == A.size() || locB == B.size()){
		string S("");
		return S;
	}
	else if (A[locA] == B[locB]){
		char tmp[2] = {A[locA], '\0'};
		string S(tmp);
		return S + getstr(A, B, locA + 1, locB + 1);
		// return S + A[locA] + getchar(A, B, locA + 1, locB + 1);
	}
	else {
		string S1 = getstr(A, B, locA + 1, locB);
		string S2 = getstr(A, B, locA, locB + 1);
		if (S1.size() > S2.size()){
			return S1;
		}
		return S2;
	}
}
#endif

int main(){
	string A, B;
	cin >> A >> B;
	int a[A.size()+1][B.size() + 1];
	int b[A.size()+1][B.size() + 1];
	coutLen(A, B, (int **)a, (int **)b);
	putstr(A, B.size(), (int **)b, A.size(), B.size());
	cout <<endl;
	// string CoStr = getstr(A, B, 0, 0);
	// cout << CoStr <<endl;
}

