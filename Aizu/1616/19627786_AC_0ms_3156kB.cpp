#include<bits/stdc++.h>
using namespace std;
long long n,m,x[1010],ans;

int main()
{
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		if(n==m && n==0) break;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&x[i]);
		}
		ans = -1;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(x[i]+x[j]<=m) ans = max(ans,x[i]+x[j]);
			}
		}
		if(ans==-1) printf("NONE\n");
		else printf("%lld\n",ans);
	}	
	return 0;
}