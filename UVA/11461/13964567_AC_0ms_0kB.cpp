#include<stdio.h>
int n,m,ans;
int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(n==0 && m==0) break;
		ans = 0;
		for(int i=1;i*i<=m;i++)
		{
			if(i*i<=m && i*i>=n)ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}