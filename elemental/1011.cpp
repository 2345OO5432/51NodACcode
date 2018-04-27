#include<iostream>
using namespace std;
void ouji(int,int);
int main(void)
{
	int a,b;
	cin >> a >> b;
	ouji(a, b);
	return 0;
}
void ouji(int m,int n)
{
	int a1 = (m >= n)? m: n;
	int a2 = (m < n)? m: n;
	int d = a1 % a2;
	
	while ( d )
	  a1=a2, a2=d, d=a1%a2;
	cout << a2 <<endl;
}
