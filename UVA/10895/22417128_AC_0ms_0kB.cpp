#include<bits/stdc++.h>
using namespace std;
struct data
{
	int pos[10010],v[10010];
}x[10010];
int idx[10010],n,m,a[10010],jum,tmp,k;

int main()
{
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		for(int i=0;i<n;i++) idx[i]=0;
		for(int i=0;i<m;i++)
		{
			scanf("%d",&k);
			for(int j=0;j<k;j++)
			{
				scanf("%d",&a[j]);
			}
			for(int j=0;j<k;j++)
			{
				scanf("%d",&tmp);
				x[a[j]-1].pos[idx[a[j]-1]] = i+1;
				x[a[j]-1].v[idx[a[j]-1]++] = tmp;
			}
		}
		printf("%d %d\n",n,m);
		for(int i=0;i<n;i++)
		{
			printf("%d",idx[i]);
			for(int j=0;j<idx[i];j++)
			{
				printf(" %d",x[i].pos[j]);
			}
			printf("\n");
			for(int j=0;j<idx[i];j++)
			{
				if(j) printf(" ");
				printf("%d",x[i].v[j]);
			}
			printf("\n");
		}
	}	
	return 0;
}