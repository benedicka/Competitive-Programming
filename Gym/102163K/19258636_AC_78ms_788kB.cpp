#include<bits/stdc++.h>
using namespace std;
long long t,n,a[100010],x,ans,l,r,cnt;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&x);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		l = r = cnt = ans =  0;
		while(r<n)
		{
			cnt+=a[r];
			while(cnt>=x && l<r)
			{
				cnt-=a[l];
				l++;
			}
			if(cnt<x)
			{
				//printf("c: %lld %lld\n",l,r);
				ans+=(r-l+1);
			}
			r++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}