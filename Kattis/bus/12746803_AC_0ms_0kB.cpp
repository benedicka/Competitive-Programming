#include<stdio.h>
int main()
{
	int t,n;
	double a,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a = 0;
		for (int i=0;i<n;i++)
		{
			a += 0.5;
			a *=2;
		}
		printf("%.0lf\n",a);
	
	}
	
	return 0;
}