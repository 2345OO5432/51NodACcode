/*************************************************************************
    > Filename: 1174.cpp
    > Author: Lv Feng
    > Mail: lvfeng97@outlook.com
    > Date: 2018-05-07
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#if 0
struct TTree{
	int MaxV;
	int pos;
	TTree *Left, *Right;
};

TTree *ConstrTree(int ivec[], int low, int high){
	if (low == high){
		TTree *tmp = new TTree();
		tmp->MaxV = ivec[low];
		tmp->Left = NULL;
		tmp->Right = NULL;
		tmp->pos = low;
		return tmp;
	}
	else if (low == high - 1){
		TTree *tmp = new TTree();
		TTree *tmp1 = new TTree();
		TTree *tmp2 = new TTree();
		tmp1->MaxV = ivec[low];
		tmp2->MaxV = ivec[high];
		tmp1->Right = tmp1->Left = NULL;
		tmp2->Right = tmp2->Left = NULL;
		tmp->Left = tmp1;
		tmp->Right = tmp2;
		tmp->MaxV = max(tmp1->MaxV, tmp2->MaxV);
		return tmp;
	}
	else {
		TTree *tmp = new TTree();
		int mid = (high - low) / 2;
		tmp->Left = ConstrTree(ivec, low, low + mid );
		tmp->Right = ConstrTree(ivec, low + mid + 1, high);
		tmp->MaxV = max(tmp->Left->MaxV, tmp->Right->MaxV);
		return tmp;
	}
}

int Search(int low, int high){

}
#endif
const int _INF = -(1e9 + 1);
int main(){
	int N;
	cin >> N; 
	int num[N];
	for(int i = 0; i != N; ++i){
		cin >> num[i];
	}
	int Q;
	cin >> Q;
	int i, j;
	int maxV;
	while (Q--){
		cin >> i >> j;
		maxV = _INF;
		while(i <= j){
			maxV = max(maxV, num[i]);
			++i;
		}
		cout << maxV <<endl;
	}
	return 0;
}
