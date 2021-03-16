#include<bits/stdc++.h>
using namespace std;
int n,m,x,ans,cnt[110],mx,jum;
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		mx = 0;
		jum = -1;
		for(int j=0;j<n;j++)
		{
			scanf("%d",&x);
			if(x>jum) 
			{
				jum = x;
				mx = j;
			}
		}
		cnt[mx]++;
	}
	mx = 0;
	for(int i=1;i<n;i++)
	{
		if(cnt[i]>cnt[ans]) ans = i;
	}
	printf("%d\n",ans+1);	
	return 0;
}