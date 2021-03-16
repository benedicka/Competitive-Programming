#include<stdio.h>
#include<algorithm>
#include<ctype.h>
using namespace std;
int m1[8] = { 0, 0, 1,-1, 1, 1,-1,-1};
int m2[8] = { 1,-1, 0, 0, 1,-1, 1,-1};
int n,m,cnt,cek;
char mains[110][110];
bool ok;
int bom(int x,int y)
{
	int res=0;
	for(int i=0;i<8;i++)
	{
		if(x+m1[i]>=0 && x+m1[i]<n && y+m2[i]>=0 && y+m2[i]<m && mains[x+m1[i]][y+m2[i]]=='*') res++;
	}
	
	return res;
}
int main()
{
	cnt = 0;
	ok = 1;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&mains[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mains[i][j]!='*')
			{
				cnt = bom(i,j);
				//printf("%d\n",cnt);
				if(isdigit(mains[i][j])) cek = mains[i][j]-'0';
				else cek = 0;
				if(cnt!=cek)
				{
				
					ok = 0;
					break;
				}
			}
		}
		if(!ok) break;
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}