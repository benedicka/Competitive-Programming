#include<bits/stdc++.h>
using namespace std;
int n,a[100010],ans,idx[100010];
bool swaps;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		idx[a[i]] = i;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			ans++;
		}
	}
	if(ans==n)
	{
		printf("%d\n",ans);
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]!=i)
			{
				if(a[a[i]]==i && idx[i]== a[i]) swaps = 1;
			}
		}
		printf("%d\n",ans+(swaps?2:1));
	}
	return 0;
}