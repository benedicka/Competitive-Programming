#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t,s,ans,spend;
	scanf("%lld",&t);
	while(t--)
	{
		ans = 0;
		scanf("%lld",&s);
		while(s!=0)
		{
			//printf("%lld %lld\n",ans,s);
			if(s<10)
			{
				ans+=s;
				s = 0;
			}
			else
			{
				spend = 10*floor((double)s/10);
				s-=9*spend/10;
				ans+=spend;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}