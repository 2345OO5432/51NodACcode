/*************************************************************************
    > Filename: 1432.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-03-16
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
bool GT(int a, int b){
	return a > b;
}
using namespace std;
int getnum( int zhong, vector<int> &people_zhong);
int main(){
	int people, zhong;
	cin >> people >> zhong;
	vector<int> people_zhong;
	int n;
	for(int i = 0; i!= people; ++i){
		cin >>n;
		people_zhong.push_back(n);
	}
	cout << getnum( zhong, people_zhong)<<endl;
	return 0;
}

int getnum(int zhong, vector<int> &people_zhong){
	sort(people_zhong.begin(), people_zhong.end(), GT);
	int num = 0;
	vector<int>::iterator fiter;
	for(fiter = people_zhong.begin(); fiter != people_zhong.end() ; ){
		if (fiter != people_zhong.end() - 1 && (*fiter + *(people_zhong.end() - 1)  <= zhong ) ){
			++num;
			people_zhong.erase(fiter);
			people_zhong.erase(people_zhong.end() - 1);
		}
		else{
			++num;
			people_zhong.erase(fiter);
		}
	}
	return num;
}

