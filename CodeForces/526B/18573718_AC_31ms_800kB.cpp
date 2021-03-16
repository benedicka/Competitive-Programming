#include<bits/stdc++.h>
using namespace std;
int n,a[100010],p2[21] = {1},idx,dp[100010] = {-1},ans;
int main()
{
	for(int i=1;i<=11;i++) p2[i] = p2[i-1]*2;
	scanf("%d",&n);
	n+=1;
	idx = p2[n]-2;
	for(int i=1;i<=idx;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=idx;i>=1;i-=2)
	{
		ans+=abs(a[i]-a[i-1]);
		a[(i-1)/2]+=(max(a[i],a[i-1]));
	}
	printf("%d\n",ans);
	return 0;
}