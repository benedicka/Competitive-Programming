#include<stdio.h>
int n,v[100010],min,mid,max,ans;
bool cek(int x)
{
	for(int i=0;i<n;i++)
	{
		x+=v[i];
		if(x<0) return 0;
	}
	return 1;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}
	min = 0;
	ans = 1e8;
	max = 1e8;
	for(int i=0;i<1000;i++)
	{
		mid = (min+max)/2;
		if(cek(mid)) 
		{
			max = mid;
			if(ans>mid) ans = mid;
		}
		else min = mid;
	}
	printf("%d\n",ans);
	return 0;
}