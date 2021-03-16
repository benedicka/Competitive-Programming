#include<bits/stdc++.h>
using namespace std;
long long t,n,m,x;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&m);
		if(n>m) swap(n,m);
		x = m/2 + 1;
		printf("%lld\n",x*(n/2)+ (m+1-x)*((n+1)/2));
	}
	
	return 0;
}