#include<stdio.h>
int n,t,k,idx;
char x[27],y[27];
bool flag[27];
void permutation(int c)
{
	if(idx<k)
	{
		if(c==n)
		{
			for(int i=0;i<n;i++)
			{	
				printf("%c",y[i]);
			}
			idx++;
			printf("\n");
			return;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(flag[i]==0)
				{
					flag[i] = 1;
					y[c] = x[i];
					permutation(c+1);
					flag[i] = 0;
				}
			}	
		}
	}
	
}
int main()
{
	
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++)
		{
			x[i] = i+65;
		}
		idx = 0;
		for(int i=0;i<n;i++)
		{
			flag[i] = 0;
		}
		printf("Case %d:\n",i+1);
		permutation(0);
	}	
	
	return 0;
}