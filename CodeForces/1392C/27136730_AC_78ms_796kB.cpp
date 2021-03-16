#include<bits/stdc++.h>
using namespace std;
int t,n,a[200010],mx,cnt;
long long ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans = cnt = 0;
		scanf("%d",&a[0]);
		for(int i=1;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<a[i-1])
			{
				ans+=(a[i-1]-a[i]);
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}