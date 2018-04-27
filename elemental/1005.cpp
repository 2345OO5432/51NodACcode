/*************************************************************************
  > Filename: 1005.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-04-25
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
void sum(string A, string B);
void substrct(string A, string B);
int main(){
	string A, B;
	getline(cin, A);
	getline(cin, B);
	if (*A.begin() != '-' && *B.begin() != '-'){
		sum(A, B);
	}
	else if (*A.begin() == '-' && *B.begin() == '-'){
		A.erase(A.begin());
		B.erase(B.begin());
		cout << '-';
		sum(A,B);
	}
	else if (*A.begin() != '-' && *B.begin() == '-'){
		B.erase(B.begin());
		if ( A.size() > B.size() || ( A.size() == B.size() && A > B ) ){
			substrct(A, B);
		}
		else if ( B.size() > A.size() || ( A.size() == B.size() && A < B ) ){
			cout << '-' ;
			substrct(B, A);
		}
		else{
			cout << 0 <<endl;
		}
	}
	else{
		A.erase(A.begin());
		if ( A.size() > B.size() || (A.size() == B.size() && A > B) ){
			cout << '-';
			substrct(A, B);
		}
		else if (A.size() < B.size() || (A.size() == B.size() && A < B)){
			substrct(B, A);
		}
		else {
			cout << 0 <<endl;
		}
	}
	// else if ( *A.begin() == '-' && *B.begin() != '-' ){
	//     if ( A.size()-1 > B.size() || (A.size()==B.size()&&  ) )
	// }

	return 0;
}
void sum(string A, string B){
	string C(max(A.size(), B.size()) + 1, '0');
	int fw = 0;
	string::reverse_iterator itea , iteb, itec;
	for (itea = A.rbegin(), iteb = B.rbegin(), itec = C.rbegin(); 
				itea != A.rend() && iteb != B.rend(); ++itea, ++iteb, ++itec){
		*itec = (*itea - '0' + *iteb - '0' + fw ) % 10 + '0';
		fw = (*itea + *iteb - '0' - '0' + fw) >= 10? 1 : 0;
	}
	if ( itea == A.rend() && iteb != B.rend() ){
		while (iteb != B.rend()){
			*itec = (*iteb - '0' + fw ) % 10 + '0';
			fw = (*iteb - '0' + fw) >= 10 ? 1 : 0;
			++iteb;
			++itec;
		}
	}
	else if (itea != A.rend() && iteb == B.rend()){
		while (itea != A.rend()){
			*itec = (*itea - '0' + fw ) % 10 + '0';
			fw = (*itea - '0' + fw) >= 10 ? 1 : 0;
			++itea;
			++itec;
		}
	}
	// else ;
	*itec = fw + '0';
	if (*C.begin() == '0'){
		C.erase(C.begin());
	}
	cout << C <<endl;;
}
void substrct(string A, string B){
	string C(max(A.size(), B.size()), '0');
	string::reverse_iterator itea, iteb, itec;
	int bw = 0;
	for (itea = A.rbegin(), iteb = B.rbegin(), itec=C.rbegin();
				iteb != B.rend(); ++itea, ++iteb, ++itec){
		*itec = (*itea - *iteb  - bw + 10) % 10 + '0';
		bw = ( *itea - *iteb - bw  >= 0)? 0 : 1;
	}
	// if (itea != A.rend() ){
	while (itea != A.rend()){
		*itec = (*itea - '0' - bw + 10) %10 + '0';
		bw = (*itea - '0' - bw >= 0)? 0 : 1;
		++itea;
		++itec;
	}
	// }
	while ( *C.begin() == '0' ){
		C.erase(C.begin());
	}
	cout << C <<endl;
	// R = C;
	// return C.size();
}
