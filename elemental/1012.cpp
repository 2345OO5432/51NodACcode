#include<iostream>
typedef long long ll;
using namespace std;
void ouji(ll,ll);
int main(void)
{
	ll a,b;
	cin >> a >> b;
	ouji(a, b);
	return 0;
}
void ouji(ll m,ll n)
{
	ll a1 = (m >= n)? m: n;
	ll a2 = (m < n)? m: n;
	ll d = a1 % a2;
	
	while ( d )
	  a1=a2, a2=d, d=a1%a2;
	cout << m * n / a2 <<endl;
}
