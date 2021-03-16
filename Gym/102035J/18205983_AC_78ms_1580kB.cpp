#include<bits/stdc++.h>
using namespace std;
long long n,x[100010],sum[100010],m;
int main()
{
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&x[i]);
		sum[i] = sum[i-1]+x[i];
		//printf("%lld ",sum[i]);
	}
	if(n==1)
	{
		printf("%lld\n",m);
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(i!=1) printf(" ");
			if(i==1) printf("%lld",sum[n]-x[i]);
			else if(i!=n)printf("%lld",max(sum[n]-sum[i],max(sum[i-1] , (max(sum[i-1]+m,(long long)0))+sum[n]-sum[i])));
			else printf("%lld",sum[n-1]);
		}
		printf("\n");
	}
	
	return 0;
}