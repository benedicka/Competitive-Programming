#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
int n,m,c,o,ca[300],ans,curr,tc;
bool on[30];
int main()
{
	while(scanf("%d %d %d",&n,&m,&c)!=0)
	{
		if(n==0 && m==0 && c==0) break;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&ca[i]);
			on[i] = 0;
		}
		curr  = 0;
		ans = 0;
		for(int i=0;i<m;i++)
		{
			scanf("%d",&o);
			
			o-=1;
			if(on[o])
			{
				on[o] = 0;
				curr-=ca[o];
			}
			else
			{
				on[o] = 1;
				curr+=ca[o];
				if(ans<curr) ans = curr;
			}
		}
		tc++;
		printf("Sequence %d\n",tc);
		if(ans>c) printf("Fuse was blown.\n");
		else
		{
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n",ans);
		}
		printf("\n");
	}
	return 0;
}