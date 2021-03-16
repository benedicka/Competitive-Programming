#include<bits/stdc++.h>
using namespace std;
int n,m,x[110],cnt,ans[110];
bool ada[110];
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		if(!ada[x[i]])
		{
			ans[cnt++] = i+1;
			ada[x[i]] = 1;
		}
	}
	if(cnt<m)
	{
		printf("NO\n");
	}
	else 
	{
		printf("YES\n");
		for(int i=m-1;i>=0;i--)
		{
			if(i!=cnt-1) printf(" ");
			printf("%d",ans[i]);
		}
		printf("\n");
	}
	
	return 0;
}