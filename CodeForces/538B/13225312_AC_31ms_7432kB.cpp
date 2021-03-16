#include<stdio.h>
int n,x = 1000000,c = 0,sisa=0,jum = 0;
int ans[1000000];
int main()
{
	scanf("%d",&n);
	for(int i=0;i<1000000;i++)
	{
		ans[i] = 0;
	}
	while(n!=0)
	{
		if(x>n) x/=10;
		else
		{
			c = n/x;
			n-=n/x*x;
			if(c>jum) jum = c;
			for(int i=0;i<c;i++)
			{
				ans[i]+=x;
			}
		}
	}
	printf("%d\n",jum);
	for(int i=0;i<jum;i++)
	{
		printf("%d",ans[i]);
		if(i==jum-1) printf("\n");
		else printf(" ");
	}
	return 0;
}