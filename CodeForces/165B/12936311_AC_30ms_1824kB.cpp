#include<stdio.h>

int main()
{
	long long n,k,c,ans,min,max,mid,a;
	scanf("%lld %lld",&n,&k);
	min = 1;
	max = n;
	while(min<=max)
	{
		mid = (min+max)/2;
		a = 1;
		c = 0;
		
		while (mid/a!=0)
		{
			c+=mid/a;
			a*=k;	
		}	
	//	printf("c = %lld\n",c);
		if(c<n) min = mid+1;
		else 
		{
			ans = mid;
			max = mid-1;
		}
	}
	printf("%lld",ans);
	
	return 0;
}