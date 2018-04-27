/*************************************************************************
  > Filename: sortsub.cpp
  > Author: Lv Feng
  > Mail: lvfeng97@outlook.com
  > Date: 2018-03-07
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int output( int number, int time );

int main(){
	int groupnum;
	int onenumber;
	int onetime;
	int result;
	vector<int> number;
	vector<int> time;
	cin >> groupnum;
	//get input data
	int i = 0; 
	while (i++ < groupnum  ){
		cin >> onenumber >> onetime;
		number.push_back( onenumber );
		time.push_back( onetime );
	}
	//compute the substract result
	vector<int>::iterator iter, itertime;
	for ( iter = number.begin(), itertime = time.begin(); iter != number.end() 
				&& itertime != time.end(); ++ iter, ++ itertime){
		result = output(*iter, *itertime);
		cout << result << endl;
	}
	return 0;
}

int output( int number, int time ){
	int retval = number;
	int single[4];
	int big, small;
	for (int i = 0; i != time ; i++){
		single[0] = retval / 1000;
		single[1] = (retval % 1000 ) / 100;
		single[2] = (retval % 100) / 10;
		single[3] = retval % 10;
		sort(single, single + 4);
		big = single[3] * 1000 + single[2] * 100 + single[1] * 10 + single[0];
		small = single[0] * 1000 + single[1] * 100 + single[2] * 10 + single[3];
		retval = big - small;
	}
	return retval;
}
