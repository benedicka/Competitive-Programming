#include<bits/stdc++.h>
using namespace std;
int t,l,r,val,x[10010]={0},update[10010]={0},q,idx,n,u,sum;
int main()
{
	scanf("%d",&t);	
	while(t--)
	{
		scanf("%d %d",&n,&u);
		while(u--)
		{
			scanf("%d %d %d",&l,&r,&val);
			update[l] += val;
			update[r+1] += (-1*val);
		}
		sum = 0;
		for(int i=0;i<n;i++)
		{
			sum+=update[i];
			x[i] = sum;
		}
		scanf("%d",&q);
		while(q--)
		{
			scanf("%d",&idx);
			printf("%d\n",x[idx]);
		}
		for(int i=0;i<n;i++)
		{
			update[i] = x[i] = 0;
		}
	}
	return 0;
}