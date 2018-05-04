/*************************************************************************
    > Filename: 1289.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-03
 ************************************************************************/
// 本题题目极其不严谨，因此无多少意义
#include<iostream>
#include<stack>
using namespace std;
// #define LEFT 0
#define RIGHT 1
stack<int> rightStack;
#if 0
void dealOne(int fish_size, int dir){
	if (dir == LEFT){
		while(!rightStack.empty() && rightStack.top() < fish_size){
			rightStack.pop();
		}
		if (rightStack.empty()){
			leftStack.push(fish_size);
		}
	}
	else {
		while ( !leftStack.empty() && leftStack.top() < fish_size ){
			leftStack.pop();
		}
		if (leftStack.empty()){
			rightStack.push(fish_size);
		}
	}
}
#endif
int main(){
	int N;
	cin >>N;
	int fish[N], dir[N];
	for (int i = 0; i != N; ++i){
		cin >> fish[i] >> dir[i];
	}
	int left_num = N;
	for (int i = 0; i != N; ++i){
		if (dir[i] == RIGHT){
			rightStack.push(fish[i]);
		}
		else {
			while(!rightStack.empty()){
				if (rightStack.top() < fish[i]){
					rightStack.pop();
					--left_num;
				}
				else {
					--left_num;
					break;
				}
			}
		}
	}
	// cout << leftStack.size() + rightStack.size() <<endl;
	cout <<left_num <<endl;
	return 0;
}

