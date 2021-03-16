#include<stdio.h>
#include<string>
int m1[4] = {1,-1,0,0};
int m2[4] = {0,0,1,-1};
int t,m,n;
char x[1000][1000];
bool visit[1000][1000],ok;
int s1,s2,f1,f2;
void dfs(int a,int b)
{

	visit[a][b] = 1;
	if(ok==1) return;
	if(a==f1 && b==f2)
	{
		ok = 1;
		return;
	}
	for(int i=0;i<4;i++)
	{
		if(a+m1[i]>=0 && a+m1[i]<=m-1 && b+m2[i]>=0 && b+m2[i]<=n-1 && visit[a+m1[i]][b+m2[i]]==0 && x[a+m1[i]][b+m2[i]]=='.' )
		{
			dfs(a+m1[i],b+m2[i]);
		}
	}
	return;
}
int main()
{
	
	int cnt = 0;
	scanf("%d",&t);
	while(t--)
	{
		s1=-1;
		s2 = -1;
		cnt = 0;
		scanf("%d %d",&m,&n);
		for(int i=0;i<m;i++)
		{
			getchar();
			for(int j=0;j<n;j++)
			{
				scanf("%c",&x[i][j]);
				visit[i][j] = 0;
				if(i==0 || j==0 || i==m-1 || j==n-1)
				{
					if(x[i][j]=='.')
					{
						cnt++;
						if(s1==-1 && s2==-1)
						{
							s1 = i;
							s2 = j;
						}
						else
						{
							f1 = i;
							f2 = j;
						}
					}
				}
			}
		}
	//	printf("start = %d , %d\n",s1,s2);
	//  printf("finish = %d , %d\n",f1,f2);
		if(cnt!=2) printf("invalid\n");
		else
		{
			ok = 0;
			dfs(s1,s2);
			if(ok==0) printf("invalid\n");
			else printf("valid\n");
		}
	}
	
	
	
	return 0;
}