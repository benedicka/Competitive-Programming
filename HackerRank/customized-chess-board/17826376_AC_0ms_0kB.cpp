#include<bits/stdc++.h>
using namespace std;
int t,n,x[110][110],m1[] = {1,-1,0,0},m2[] = {0,0,1,-1};
bool ok;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ok = 1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&x[i][j]);
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<4;k++)
				{
					if(i+m1[k]>0 && i+m1[k]<n && j+m2[k]>0 && j+m2[k]<n)
					{
						if(x[i+m1[k]][j+m2[k]]==x[i][j])
						{
							ok = 0;
						}
					}
				}
			}
		}
		printf("%s\n",ok?"Yes":"No");
	}
	return 0;
}