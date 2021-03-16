#include<bits/stdc++.h>
using namespace std;
int dp[550][100010],t,n,q,a[100010],q1,q2,s,ans,tmp;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			tmp = 0;
			for(int j=2;j<=10;j++)
			{
				if(a[i]%j==0) tmp|=(1<<(j-2));
			}
			for(int j=0;j<=512;j++)
			{
				dp[j][i] = dp[j][i-1]+((tmp&j)>0);
			}
		}
		while(q--)
		{
			scanf("%d %d %d",&q1,&q2,&s);
			ans = 0;
			if(s%2) ans = q2-q1+1;
			else
			{
				s>>=1;
				ans = dp[s][q2]-dp[s][q1-1];
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}