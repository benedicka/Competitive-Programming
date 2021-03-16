#include<bits/stdc++.h>
using namespace std;
int t,n,m,x[1010][1010],ans,k=0;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%d",&x[i][j]);
			}
			sort(x[i],x[i]+m);
			k = 0;
			if(i>=1)
			{
				for(int j=0;j<m;j++)
				{
					while(k<m && x[i-1][k]<=x[i][j])
					{
						if(x[i-1][k]==x[i][j])
						{
							ans++;
							k++;
							break;
						}
						k++;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}