#include<bits/stdc++.h>
using namespace std;
int t,n,k,x[100010],sum,l,r,mid,ans;
bool ok(int z)
{
	int id=0,st;
	for(int i=0;i<n;i++)
	{
		st= x[id]+z-1;
		if(id==k-1) break;
		for(int j=id;j<k;j++)
		{
			if(x[j]>st || j==k-1) 
			{
				id = j;
				break;	
			}
		}
	}
	return st>=x[k-1];
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&k,&n);
		for(int i=0;i<k;i++)
		{
			scanf("%d",&x[i]);
			
		}
		ans = x[k-1] - x[0] + 1;
		l = 1;
		r = x[k-1] - x[0] + 1;
		sort(x,x+n);
		while(l<=r)
		{
			mid = (l+r)/2;
			if(ok(mid))
			{
				ans = min(ans,mid);
				r = mid-1;
			}
			else l = mid+1;
		}
		printf("%d\n",ans);
	}	
	return 0;
}