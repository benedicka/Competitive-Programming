#include<stdio.h>
int coin[25];
long long input,ans[10010];
int main()
{
	ans[0] = 1;
	for(int i=0;i<=20;i++)
	{
		coin[i] = (i+1)*(i+1)*(i+1);
	}
	for(int i=0;i<21;i++)
	{
		for(int j=0;j<=10000;j++)
		{
			if(coin[i]<=j)
			{
				ans[j]+=(ans[j-coin[i]]);
			}
		}
	}
	while(scanf("%lld",&input)!=EOF)
	{
		printf("%lld\n",ans[input]);
	}
	return 0;
}