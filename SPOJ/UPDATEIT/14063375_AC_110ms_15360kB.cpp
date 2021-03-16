#include<stdio.h>
int t,l,r,val,x[10010],update[10010],q,idx,n,u,sum;

int main()
{
	scanf("%d",&t);	
	while(t--)
	{
		scanf("%d %d",&n,&u);
		sum = 0;
		for(int i=0;i<n;i++)
		{
			x[i] = 0;
			update[i] = 0;
		} 
		while(u--)
		{
			scanf("%d %d %d",&l,&r,&val);
			update[l] += val;
			update[r+1] += (-1*val);
		}
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
	}
	return 0;
}