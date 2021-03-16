#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a[110],ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		ans = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j]) ans++;
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
	return 0;
}