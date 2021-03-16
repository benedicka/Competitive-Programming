#include<bits/stdc++.h>
using namespace std;
long long n,x[500010],sum,target,tmp,cnt[500010],ans;
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
		sum+=x[i];
	}
	if(sum%3) printf("0\n");
	else
	{
		target = sum/3;
		tmp = 0;
		for(int i=0;i<n;i++)
		{
			tmp+=x[i];
			if(tmp==target) cnt[i] = 1;
		}
		for(int i=1;i<n;i++)
		{
			cnt[i]+=cnt[i-1];
		}
		tmp = 0;
		for(int i=n-1;i>=0;i--)
		{
			tmp+=x[i];
			if(i-2<0) break;
			if(tmp==target)
			{
				ans+=cnt[i-2];
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}