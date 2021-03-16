#include<stdio.h>
int main()
{
	int n,m,a[51],b[51],max=0,ans = 0;
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<m;j++)
		{
			if(b[j]%a[i]==0 && b[j]/a[i]>max) max = b[j]/a[i];
		}
		//printf("max = %d\n",max);
	}
	//printf("max = %d\n",max);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]*max==b[j])ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}