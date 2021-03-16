#include<bits/stdc++.h>
using namespace std;
int n,c[200010],ans[200010],idx[200010],jmp[200010];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&c[i]);
		ans[i] = i;
		if(idx[c[i]]!=0)
		{
			jmp[i] = idx[c[i]];
		}
		idx[c[i]] = i;
	}
	ans[0] = 1e6;
	ans[1] = 0;
	for(int i=2;i<=n;i++)
	{
		ans[i] = min(ans[i-1]+1,ans[jmp[i]]+1); 
	}
	printf("%d\n",ans[n]);
	return 0;
}