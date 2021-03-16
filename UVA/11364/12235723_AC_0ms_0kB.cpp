#include<stdio.h>
int main()
{
	int t,b;
	int n[100],a[100][20];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		for(int j=0;j<n[i];j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<t;i++)
	{
		for (int j=0;j<n[i];j++)
		{
			b=j;
			for (int k=j+1;k<n[i];k++)
			{
				if(a[i][b]>a[i][k]) b=k;
			}
			int s;
			s=a[i][j];
			a[i][j]=a[i][b];
			a[i][b]=s;
		} 
		b=0;
		for(int l=n[i]-1;l>0;l--)
		{
			b=b+a[i][l]-a[i][l-1];
		}
		printf("%d\n",2*b);
	}
	
	return 0;
}