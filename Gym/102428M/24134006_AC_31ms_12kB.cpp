#include<bits/stdc++.h>
using namespace std;
int n,mx,a[1010],now,ans,cnt,k;

int main()
{
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ans = cnt = 1;
	now = k;
	for(int i=1;i<n;i++)
	{
		if(abs(a[i]-a[i-1])<=now)
		{
			cnt++;
		}
		else
		{
			
			ans = max(ans,cnt);
			cnt = 1;
			now = k;
		}
		if(now==0)
		{	
			ans = max(ans,cnt);
			cnt = 1;
			now = k;
		}
	}	
	ans = max(ans,cnt);
	printf("%d\n",ans);
	return 0;
}