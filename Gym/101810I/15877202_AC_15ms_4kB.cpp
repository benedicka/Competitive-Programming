#include<bits/stdc++.h>
using namespace std;
long long ans,x,n,md,bagi,t;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&x,&n);
		if(n>x) printf("-1\n");
		else
		{
			bagi = x/n;
			md = x%n;
			for(int i=0;i<n-md;i++)
			{
				if(i==0) printf("%d",bagi);
				else
				{
					printf(" %d",bagi);
				}
			}
			for(int i=0;i<md;i++)
			{
				printf(" %d",bagi+1);
			}
			printf("\n");
		}
	}
	return 0;
}