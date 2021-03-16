#include<bits/stdc++.h>
using namespace std;
long long k,len,same,diff,ans;
char x[1010],y[1010];
int main()
{
	scanf("%lld",&k);
	scanf("%s",&x);
	scanf("%s",&y);
	len = strlen(x);
	for(int i=0;i<len;i++)
	{
		if(x[i]==y[i])
		{
			same++;
		}
	}
	diff = len-same;
	if(same<=k)
	{
		ans = same+len-k;
	}
	else
	{
		ans = k+diff;
	}
	printf("%lld\n",ans);
	return 0;
}