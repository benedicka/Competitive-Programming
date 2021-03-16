#include<bits/stdc++.h>
using namespace std;
int t,n,x[10010],q,v,l,r,sum;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		memset(x,0,sizeof(x));
		sum = 0;
		while(q--)
		{
			scanf("%d %d %d",&l,&r,&v);
			x[l]+=v;
			x[r+1]-=v;
		}
		for(int i=0;i<n;i++)
		{
			sum+=x[i];
			x[i] = sum;
		}
		scanf("%d",&q);
		while(q--)
		{
			scanf("%d",&v);
			printf("%d\n",x[v]);
		}
	}
	
	return 0;
}