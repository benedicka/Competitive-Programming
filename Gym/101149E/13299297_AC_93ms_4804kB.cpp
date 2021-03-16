#include<stdio.h>

int main()
{
	int n,l[200010],r[200010],min;
	min = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&l[i],&r[i]);
		if(l[i]>min) min = l[i];
	}
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		if(l[i]<=min && r[i]>=min) ans++;
	}
	printf("%d\n",ans);
	
	
	
	
	
	return 0;
}