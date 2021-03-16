#include<bits/stdc++.h>
using namespace std;
long long n,k,m,x[60][2510];
int main()
{
	while(scanf("%lld %lld %lld",&n,&k,&m)!=EOF)
	{
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=n;j++)
			{
				x[i][j] = 0;
				if(i==1 && j<=m) x[i][j] = 1;
			}
		}
		for(int i=2;i<=k;i++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int l=1;l<=m;l++)
				{
					if(j-l<=0) break;
					x[i][j] += x[i-1][j-l];
				} 
			}
		}
		printf("%lld\n",x[k][n]);
	}
	return 0;
}