#include<bits/stdc++.h>
using namespace std;
long long ans,n,sum,cnt,x,y;
int main()
{
	scanf("%lld",&n);
	n--;
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