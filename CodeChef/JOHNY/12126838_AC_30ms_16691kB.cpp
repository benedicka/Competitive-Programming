#include<stdio.h>
#include<string.h>
int main ()
{
	int t;
	long long a[1000][100];
	int k[1000],n[1000];
	int z[1000];
	
	scanf ("%d",&t);
	for (int i=0;i<t;i++)
	{
		scanf ("%d",&n[i]);
		for (int j=0;j<n[i];j++)
		{
			scanf("%lld",&a[i][j]);
		}
		scanf ("%d",&k[i]);
		z[i]=a[i][k[i]-1];
	}
	for (int i=0;i<t;i++)
	{
		for (int j=0;j<n[i];j++)
		{
			for (int k=j+1;k<n[i];k++)
			{
			
			int tampung;
				if (a[i][j]>a[i][k])
				{
				tampung=a[i][j];
				a[i][j]=a[i][k];
				a[i][k]=tampung;
				}
			}
		}
	}
	for (int i=0;i<t;i++)
	{
		for (int j=0;j<n[i];j++)
		{
			
			if(z[i]==a[i][j])
			{
				z[i]=j+1;
				break;
			}
		}
	}
	for (int i=0;i<t;i++)
	{
		printf("%d",z[i]);
		if (i<t-1) printf ("\n");
	}
	return 0;
}