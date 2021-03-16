#include<bits/stdc++.h>
using namespace std;
int n,l,r,x,c[20],ans,mn,mx,sum,cnt;
void print(int v)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",(v&(1<<i))?1:0);
	}
	
}
int main()
{
	scanf("%d %d %d %d",&n,&l,&r,&x);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	for(int i=0;i<(1<<n);i++)
	{
		sum = mx = cnt = 0;
		mn = INT_MAX;
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				cnt++;
				mx = max(c[j],mx);
				mn = min(c[j],mn);
				sum+=c[j];
			}
		}
		if(cnt>=2 && mx-mn>=x && sum>=l && sum<=r)
		{
	//		print(mask);
	//		printf(" %d %d %d\n",sum,mn,mx);
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}