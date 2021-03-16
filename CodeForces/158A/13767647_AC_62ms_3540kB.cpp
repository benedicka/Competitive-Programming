#include<stdio.h>
#include<math.h>

int main()
{
	int n,a[100],k,ans=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k = a[k-1];
	for(int i=0;i<n;i++)
	{
		if(a[i]>=k && a[i]>0) ans++;
	}
	printf("%d",ans);
	
	
	
	return 0;
}