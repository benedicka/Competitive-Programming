#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int t,q,f,g,ans,p,index=1;;
	int a[1001],b[26],c[500502];
	f=0;
	g=0;

	while (scanf("%d",&t)!=EOF)
	{
		for (int i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&q);
	for (int i=0;i<q;i++)
	{
		scanf("%d",&b[i]);
	}

	for (int i=0;i<t;i++)
	{
		for (int k=i+1;k<t;k++)
		{
			c[g]=a[i]+a[k];
			g++;
			
		}
	}
	printf("Case %d:\n",index);
	index++;
	for (int i=0;i<q;i++)
	{
		for (int j=0;j<g;j++)
		{
			if (j==0)
			{
			ans=b[i]-c[j];
			if (ans<0) ans=ans*-1;
			p=c[j];
			}
			else if (b[i]>=c[j])
			{
				if (b[i]-c[j]<=ans) 
				{
					ans=b[i]-c[j];
					p=c[j];
				}
				if (b[i]==c[j]) break;
			}
			else if (c[j]>=b[i])
			{
				if (c[j]-b[i]<=ans) 
				{
					ans=c[j]-b[i];
					p=c[j];
				}
				if (b[i]==c[j]) break;
			}
			
			
			
			
		}
		printf("Closest sum to %d is %d.\n",b[i],p);
	
	}

	}
	
	return 0;
}
