#include<stdio.h>

int main()
{
 	int n,d,ans,x[10010];
 	scanf("%d %d",&n,&d);
 	for(int i=0;i<n;i++)
 	{
 		scanf("%d",&x[i]);
	}
	ans =2;
	for(int i=1;i<n;i++)
	{
		//printf("%d %d\n",x[i]-x[i-1],2*d);
		if(x[i]-x[i-1]==2*d) 
		{
			ans++;
		}
		else if(x[i]-x[i-1]>2*d)
		{
			ans+=2;
		}
	}
	printf("%d\n",ans);
	return 0;
}