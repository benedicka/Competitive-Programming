#include<bits/stdc++.h>
using namespace std;
int n,m;
char x[1010][1010];
int a[1010],b[1010],jum;
pair < int , int > ans;
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&x[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(x[i][j]=='*')
			{
				jum++;
				a[i]++;
				b[j]++;
			}
		}
	}
	
	ans = make_pair(-1,-1);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		//	printf("%d %d\n",a[i],b[j]);
			if(ans.first!=-1 && ans.second!=-1) break;
			if(x[i][j]=='.' && a[i]+b[j]==jum)
			{
				ans = make_pair(i+1,j+1);
			}
			else if(x[i][j]=='*' && a[i]+b[j]-1==jum)
			{
				ans = make_pair(i+1,j+1);
			}
		}
	}
	if(ans.first==-1 && ans.second==-1) printf("NO\n");
	else printf("YES\n%d %d\n",ans.first,ans.second);	
	return 0;
}