#include<bits/stdc++.h>
using namespace std;
int ans ,n,a[100010],x=INT_MIN,y = INT_MAX;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=0) 
		{
			ans+=a[i];
			if(a[i]%2 && a[i]>0) y = min(y,a[i]);
		}
		else
		{
			if(a[i]%2) x = max(x,a[i]);
		}
	}
	if(ans%2) printf("%d\n",ans);
	else
	{
		printf("%d\n",max(ans+x,ans-y));
	}
	return 0;
}