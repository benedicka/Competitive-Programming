#include<bits/stdc++.h>
using namespace std;
int n,m,x[300010];
int ans[300010];
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=m+1;i<=n;i++)
	{
		ans[i] = max(ans[i-1],ans[i-m]+x[i]);
	}
	printf("%d\n",ans[n]);
	return 0;
}