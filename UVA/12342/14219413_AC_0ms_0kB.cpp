#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int t;
long long k;
double tax;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		tax = 0;
		scanf("%lld",&k);
		k-=180000;
		if(k>0)
		{
			if(k<300000)tax+=((double)k*10/100);
			else tax+=(30000);
			k-=300000;
		}
		if(k>0)
		{
			if(k<400000)tax+=((double)k*15/100);
			else tax+=(60000);
			k-=400000;
		}
		if(k>0)
		{
			if(k<300000)tax+=((double)k*20/100);
			else tax+=(60000);
			k-=300000;
		}
		if(k>0)
		{
			tax+=((double)k*25/100);
		}
		if(tax!=0 && tax<2000.0) tax = 2000;
		printf("Case %d: %.0lf\n",tc,ceil(tax));
	}
	return 0;
}