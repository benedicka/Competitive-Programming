#include<bits/stdc++.h>
using namespace std;
long long fast(long long x,long long p,long long md)
{	
	long long res = 1;
	x%=md;
	
	while(p)
	{
		if(p%2) res*=(x%md);
		res%=md;
		x*=(x%md);
		x%=md;
		p/=2;
	}
	return res;
}

int main()
{
	long long x,y,md,t;
	scanf("%lld",&t);	
	while(t--)
	{
		
		scanf("%lld %lld %lld",&x,&y,&md);
		int ans;
		ans = fast(x,y,md);
		printf("%lld\n",ans);
	}
	getchar();
	return 0;
}