#include<stdio.h>
#include<algorithm>
using namespace std;
long long n,t,a[100010],ans,c,low,high,time;

int main()
{
	scanf("%lld %lld",&n,&t);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	low = high = 0;
	while(high<=n)
	{
		while(time>t)
		{
			time-=a[low];
			c--;
			low++;
		}
		//printf("%lld %lld %lld\n",low,high,time);
		if(ans<c) ans = c;
		if(high==n) break;
		time+=a[high];
		high++;
		c++;
	}
	printf("%lld\n",ans);
	return 0;
}