#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,x[2010],cnt[3];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		cnt[0] = cnt[1] = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
			x[i]%=2;
			cnt[x[i]]++;
		}
		if(n%2==0)
		{
			//printf("cnt0 = %d cnt1 = %d\n",cnt[0],cnt[1]);
			if(cnt[1]>0 && cnt[1]!=n) printf("YES\n");
			else printf("NO\n");
		}
		else
		{
			//printf("n : %d\n",n);
			if(cnt[0]==n) printf("NO\n");
			else printf("YES\n");
		}
	}
	return 0;
}