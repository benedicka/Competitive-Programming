#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0;
int x[1010][1010];
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(x[i][j]==1)
			{
				for(int k=j+1;k<m;k++)
				{
					if(x[i][k]==0) ans+=1;
				}
				break;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=m-1;j>=0;j--)
		{
			if(x[i][j])
			{
				for(int k=j-1;k>=0;k--)
				{
					if(!x[i][k]) ans+=1;
				}
				break;
			}
		}
	}
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(x[i][j])
			{
				for(int k=i+1;k<n;k++)
				{
					if(!x[k][j]) ans+=1;
				}
				break;
			}
		}
	}
	//printf("%d\n",ans);
	for(int j=0;j<m;j++)
	{
		for(int i=n-1;i>=0;i--)
		{
			if(x[i][j])
			{
				for(int k=i-1;k>=0;k--)
				{
					if(!x[k][j]) ans+=1;
				}
				break;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}