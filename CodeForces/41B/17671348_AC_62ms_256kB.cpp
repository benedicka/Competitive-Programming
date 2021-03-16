#include<bits/stdc++.h>
using namespace std;
int n,b,x[2010],s,ans,tmp,trade;
int main()
{
	scanf("%d %d",&n,&b);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	ans = b;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			trade = b/x[i];
			tmp = b+trade*(x[j]-x[i]);
			ans = max(ans,tmp);
		}
	}
	printf("%d\n",ans);
	return 0;
}