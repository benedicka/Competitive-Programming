#include<stdio.h>
int n,m,a[300010],ans=0;
int subset[300010];
int idx1,idx2,sum = 0;
int main()
{
	scanf("%d %d",&n,&m);
	subset[0] = 0;
	ans = 0;
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j = i+1;j<n;j++)
//		{
//			//printf("%d\n",subset[j]-subset[i]);
//			if(subset[j]-subset[i]>ans && subset[j]-subset[i]<=m) ans = subset[j]-subset[i];
//			if(subset[j]-subset[i]>m) break;
//		}
//	}
	idx1 = 0;
	idx2 = 0;
	sum = a[0];
	for(int i=1;i<n;i++)
	{
		if(sum+a[i]<=m)
		{
			idx2 = i;
			sum+=a[i];
			if(sum>ans) ans = sum;
		}
		else if(sum+a[i]>m)
		{
			while(sum+a[i]>m)
			{
				sum-=a[idx1];
				idx1++;
			}
			idx2 = i;
			sum+=a[i];
			if(sum>ans) ans = sum;
		}
		//printf("%d - %d\n",a[idx1],a[idx2]);
	}
	printf("%d\n",ans);
	
	return 0;
}