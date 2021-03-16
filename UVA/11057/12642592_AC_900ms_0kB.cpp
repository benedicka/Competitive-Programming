#include<stdio.h>

int main()
{
	int n,price[10000],m,ans1,ans2,min;
	while (scanf("%d",&n)!=EOF)
	{
	
		for (int i=0;i<n;i++)
		{
			scanf("%d",&price[i]);
		}
		scanf("%d",&m);
		for (int i=0;i<n;i++)
		{
			for (int j=i+1;j<n;j++)
			{
				if (price[i]>price[j])
				{
					int swap;
					swap=price[i];
					price[i]=price[j];
					price[j]=swap;
				}
			}
		}
		min = m;
		for (int i=0;i<n-1;i++)
		{
			for (int j=i+1;j<n;j++)
			{
				if (price[i]+price[j]==m && price[j]-price[i]<min)
				{
					ans1=price[i];
					ans2=price[j];
					min=price[j]-price[i];
					if (min==0) break;
				 } 
			}
		}
		printf("Peter should buy books whose prices are %d and %d.\n\n",ans1,ans2);
	}
return 0;
}