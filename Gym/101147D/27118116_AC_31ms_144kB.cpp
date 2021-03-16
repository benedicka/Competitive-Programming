#include<bits/stdc++.h>
using namespace std;
long long n,m,t,fact[30];

int main()
{
	freopen("popcorn.in","r",stdin);
	fact[0] = 1;
	for(int i=1;i<=20;i++)
	{
		fact[i] = fact[i-1]*i;
	}
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&m);
		printf("%lld\n",fact[n]/(fact[n-m]*fact[m]));
	}
	return 0;
}