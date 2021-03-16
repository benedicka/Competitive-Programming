#include<bits/stdc++.h>
using namespace std;
long long x,cnt,tot,n,t;

int main()
{
	scanf("%lld",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%lld",&n);
		tot = cnt = 0;
		while(n--)
		{
			scanf("%lld",&x);
			tot+=abs(x);
			if(x>0) cnt++;
		}
		printf("Case %d: ",tc);
		if(cnt<1) printf("inf\n");
		else printf("%lld/%lld\n",tot/__gcd(tot,cnt),cnt/__gcd(tot,cnt));
	}
	return 0;
}