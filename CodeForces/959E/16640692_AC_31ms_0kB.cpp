#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long ans = 0,n,sum = 1,cnt = 1,x = 1,y = 1;
	scanf("%lld",&n);
	n-=1;
	while(n>0)
	{
		sum = cnt = x = y = 1;
		while(cnt<=n)
		{
			y = x;
			x = sum+cnt*2;
			sum = sum+x;
			cnt*=2;
		}
		cnt/=2;
		ans+=y;
		n-=cnt;
	}
	printf("%lld\n",ans);
	
	return 0;
}