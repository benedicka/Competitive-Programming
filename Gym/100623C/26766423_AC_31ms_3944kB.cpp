#include<bits/stdc++.h>
using namespace std;
int n,r,c,cnt;
char x[110][110];
int main()
{
	freopen("class.in","r",stdin);
freopen("class.out","w",stdout);
	scanf("%d %d %d",&n,&r,&c);
	memset(x,'.',sizeof(x));
	if(n>=r+c-1)
	{
		for(int i=0;i<r;i++)
		{
			x[i][0] = '#';
			cnt++;
		}
		for(int i=1;i<c;i++)
		{
			x[0][i] = '#';
			cnt++;
		}
	}
	else
	{
		for(int i=0;i<min((n+1)/2,r);i++)
		{
			x[i][0] = '#';
			cnt++;
		}
		for(int i=1;i<min(((n+1)/2),c);i++)
		{
			x[0][i] = '#';
			cnt++;
		}
	}
	printf("%d\n",min((n+1)/2,min(r,c)));
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(x[i][j]=='.' && cnt<n)
			{
				printf("#");
				cnt++;
			}
			else printf("%c",x[i][j]);
		}
		printf("\n");
	}
	return 0;
}