#include<stdio.h>
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
	int m,n,x[110],y[110],ans[110][110],c=1;
	while(scanf("%d %d",&n,&m)!=EOF)
	{	
		if(c!=1) printf("\n");
		if(n==0 && m==0) break;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d",&y[i]);
		}
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=m;j++)
			{
				if(i==0||j==0) ans[i][j] = 0;
				else if(x[i-1]==y[j-1]) ans[i][j] = ans[i-1][j-1]+1;
				else ans[i][j] = max(ans[i-1][j],ans[i][j-1]);
			}
		}
		printf("Twin Towers #%d\n",c);
		printf("Number of Tiles : %d\n",ans[n][m]);
		c++;
	}
	return 0;
}