#include<bits/stdc++.h>
using namespace std;
int ans,n,m,cnt;
char x[1010][1010];
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&x[i]);
	}
	cnt = 0;
	ans = 0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<m;j++)
			{
				if(x[i][j]=='.') cnt++;
				else if(x[i][j]=='L') cnt = 0;
				ans = max(ans,cnt);
			}
			
		}
		else
		{
			for(int j=m-1;j>=0;j--)
			{
				if(x[i][j]=='.') cnt++;
				else if(x[i][j]=='L') cnt = 0;
				ans = max(ans,cnt);
			}
		
		}
	}
	printf("%d\n",ans);
	return 0;
}