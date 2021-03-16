#include<bits/stdc++.h>
using namespace std;

long long n,ans,x[4],y[4],mn,mx,cnt,mp[2000010],l,r;
int main()
{
	scanf("%lld",&n);
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<3;i++)
		{
			scanf("%lld %lld",&x[i],&y[i]);
			if(i==0)
			{
				mn = mx = y[i]+1000000;
			}
			else
			{
				mn = min(mn,y[i]+1000000);
				mx = max(mx,y[i]+1000000);
			}
		}
		mp[mn]+=1;
		mp[mx+1]-=1;
		if(k==0)
		{
			l = mn;
			r = mx;
		}
		else
		{
			l = min(l,mn);
			r = max(r,mx);
		}
	}
	for(int i=l;i<=r;i++)
	{
		cnt+=mp[i];
		ans = max(ans,cnt);
	}
	printf("%lld\n",ans);
	return 0;
}