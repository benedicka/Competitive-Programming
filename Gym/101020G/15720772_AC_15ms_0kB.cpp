#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int m1[] = {0,0,1,-1,1,1,-1,-1};
int m2[] = {1,-1,0,0,1,-1,1,-1};
char x[30][30];
bool ok;
bool valid(int a, int b)
{
	if(a<0 || b<0) return 0;
	if(a>=n || b>=m) return 0;
	return 1;
}
void dfs(int a, int b, char prev)
{
	if(prev=='e')
	{
		ok = '1';
		return;
	}
	for(int i=0;i<8;i++)
	{
		if(valid(a+m1[i],b+m2[i]))
		{
			if(prev=='p' && x[a+m1[i]][b+m2[i]]=='i') dfs(a+m1[i],b+m2[i],'i');
			if(ok) return;
			if(prev=='i' && x[a+m1[i]][b+m2[i]]=='e' ) dfs(a+m1[i],b+m2[i],'e');
			if(ok) return;
		}
	}
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ok = 0;
		scanf("%d %d",&n,&m);getchar();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%c",&x[i][j]);
				getchar();
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(x[i][j]=='p') dfs(i,j,x[i][j]);
			}
			if(ok) break;
		}
		if(ok) printf("Cutie Pie!\n");
		else printf("Sorry Man\n");
	}
	return 0;
}