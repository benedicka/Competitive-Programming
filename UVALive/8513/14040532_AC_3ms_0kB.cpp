#include<stdio.h>
#include<algorithm>
using namespace std;
int t,a[200010],b[200010],n,k,ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<n;i++)
		{
			if(b[n-1-i]+a[i]>=k) ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}