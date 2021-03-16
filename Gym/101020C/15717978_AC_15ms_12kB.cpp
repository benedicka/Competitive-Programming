#include<bits/stdc++.h>
using namespace std;
long long t,n,i,j,k,ans;
bool done[110][110];
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		ans = 0;
		scanf("%lld",&n);
		for(int x=0;x<=100;x++) 
		{
			for(int y=0;y<=100;y++)
			{
				done[x][y] = 0;
			}
		}
		while(n--)
		{
			scanf("%lld %lld %lld",&i,&j,&k);
			for(int x=1;x<=k;x++)
			{
				for(int y=i+1;y<=j;y++)
				{
					done[x][y] = 1;
				}
			}
		}
		for(int x=1;x<=100;x++)
		{
			for(int y=1;y<=100;y++)
			{
				if(done[x][y]) ans++;
			}
		}
		printf("%lld\n",ans);
	}
	
	return 0;
}