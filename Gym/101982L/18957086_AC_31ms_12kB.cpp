#include<bits/stdc++.h>
using namespace std;
int n,ans,a[1010],b[1010],cnt;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);	
	}
	for(int i=0;i<=n;i++)
	{
	    cnt = 0;
		for(int j=0;j<n;j++)
		{
			if(i>=a[j] && i<=b[j]) cnt++;
		}
		if(cnt==i)ans = cnt;
	}
	printf("%d\n",ans!=0?ans:-1);
	return 0;
}