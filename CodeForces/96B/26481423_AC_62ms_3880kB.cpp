#include<bits/stdc++.h>
using namespace std;
long long n,digit,ans;
bool ok(long long x)
{
	int sum[10];
	memset(sum,0,sizeof(sum));
	while(x)
	{
		sum[x%10]++;
		x/=10;
	}
	return sum[7]==sum[4];
}
void f(long long dgt,long long sum)
{
	if(sum>=n && ok(sum))
	{
		ans = min(ans,sum);
	}
	if(dgt==10)
	{
		return;
	}
	f(dgt+1,sum*10+4);
	f(dgt+1,sum*10+7);
}
int main()
{
	scanf("%lld",&n);
	ans = LONG_LONG_MAX;
	f(0,0);
	printf("%lld\n",ans);
	return 0;
}