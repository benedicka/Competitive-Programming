#include<stdio.h>

int main()
{
	long long coin[5] = {1,5,10,25,50},ans[8000];
	ans[0] = 1;
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<8000;j++)
		{
			if(j>=coin[i])
			{
				ans[j]+=(ans[j-coin[i]]);
			}
		}
	}
	long long c;
	while(scanf("%lld",&c)!=EOF)
	{
		printf("%lld\n",ans[c]);
	}
	
	
	
	
	return 0;
}