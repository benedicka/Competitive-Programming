#include<bits/stdc++.h>
using namespace std;
int mx,ans,a[100010],n;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(mx<a[i] || i==0)
		{
			ans = i;
			mx = a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==mx && i!=ans)
		{
			ans = -1;
		}
	}
	printf("%d\n",ans==-1?ans:ans+1);
	return 0;
}