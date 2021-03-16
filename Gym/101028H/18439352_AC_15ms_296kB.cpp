#include<bits/stdc++.h>
using namespace std;
int t,n,d,r,pd,pr,ans;
bool visit[3][100010];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&n,&d,&r);
		pd = pr = ans = 0;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<n;j++)
			{
				visit[i][j] = 0;
			}
		}
		while(1)
		{
			pd+=d;
			pr+=r;
			pd%=n;
			pr%=n;
			visit[0][pd] = 1;
			visit[1][pr] = 1;
			ans++;
			if(visit[0][pd]==visit[1][pd] || visit[0][pr] == visit[1][pr]) break;
		}
		printf("%d\n",ans);
	}	
	return 0;
}