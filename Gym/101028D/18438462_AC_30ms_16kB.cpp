#include<bits/stdc++.h>
using namespace std;
long long t,n,m,r1,r2,c1,c2,d;
char x[110][110],a;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&m,&d);
		for(int i=0;i<=100;i++)
		{
			for(int j=0;j<=100;j++)
			{
				x[i][j] = '.';
			}
		}
		while(d--)
		{
			scanf("%lld %lld %lld %lld %c",&r1,&c1,&r2,&c2,&a);
			for(int i=r1;i<=r2;i++)
			{
				for(int j=c1;j<=c2;j++)
				{
					x[i][j] = a;
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				printf("%c",x[i][j]);
			}
			printf("\n");
		}
	}	
	return 0;
}