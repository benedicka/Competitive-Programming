#include<bits/stdc++.h>
using namespace std;
int n,x[110],ans,prv;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	sort(x,x+n);
	prv = x[n-1];
	ans = 1;
	for(int i=n-1;i>=0;i--)
	{
		if(x[i]<prv)
		{
			ans++;
			prv = x[i];
		}
	}
	printf("%d\n",ans);
	return 0;
}