#include<stdio.h>
#include<stdlib.h>

int main()
{
	long long n,ans,a,range,posisi;
	scanf("%lld",&n);
	a = n+1;
	ans = 0;
	range = n-1;
	posisi = 1;
	while (range!=0)
	{
		ans+=((posisi+posisi+range)%a);
		posisi = posisi+range;
		if(range>0)
		{
			range--;
			range*=-1;
		}
		else if(range<0)
		{
			range++;
			range*=-1;
		}
	}
	printf("%lld\n",ans);
	return 0;
}