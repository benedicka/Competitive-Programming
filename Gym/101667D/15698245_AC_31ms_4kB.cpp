#include<bits/stdc++.h>
using namespace std;
long long n;
bool ok,c;
void f(long long x)
{
	
	long long res=0,a;
	if(x<10 && c)
	{
		if(x==1) ok = 1;
		return;
	}
	c = 1;
	while(x>0)
	{
		a = x%10;
		res+=(a*a);
		x/=10;
	}
	f(res);
}
int main()
{
	scanf("%lld",&n);
	ok = 0;
	c = 0;
	f(n);
	if(ok) printf("HAPPY\n");
	else printf("UNHAPPY\n");	
	return 0;
}