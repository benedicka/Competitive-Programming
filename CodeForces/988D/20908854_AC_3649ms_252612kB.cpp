#include<bits/stdc++.h>
using namespace std;
long long cnt=1,ans[4],x[200010],n,jum,jumans,mx,a,b,c;
map <long long , bool > mp;
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
		ans[0] = x[i];
		mp[x[i]] = 1;
		mx = max(x[i],mx);
	}
	jumans = 1;
	ans[0] = x[0];
	sort(x,x+n);
	for(int i=0;i<n;i++)
	{
		a = x[i];
		cnt = 1;
		while(a+cnt<=mx)
		{
			b = x[i]+cnt;
			if(b+cnt<=mx) c = b+cnt;
			if(mp[a] && mp[b] && mp[c] && b+cnt<=mx)
			{
				jumans = 3;
				ans[0] = a;
				ans[1] = b;
				ans[2] = c;
			}
			else if(mp[a] && mp[b])
			{
				jumans = 2;
				ans[0] = a;
				ans[1] = b;
			}
			if(b+cnt>mx) break;
			cnt*=2;
			if(jumans==3) break;
			
		}
		if(jumans==3) break;
	}
	printf("%lld\n",jumans);
	for(int i=0;i<jumans;i++)
	{
		if(i) printf(" ");
		printf("%lld",ans[i]);
	}
	printf("\n");
	return 0;
}