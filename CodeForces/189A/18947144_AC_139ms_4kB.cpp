#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,ans,x,y;
int main()
{
	scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
	y = n/b;
	x = n/a;
	for(int i=0;i<=x;i++)
	{
		for(int j=0;j<=y;j++)
		{
			if((n-i*a-j*b)%c!=0 || (n-i*a-j*b)<0) continue;
			ans = max(ans,i+j+(n-i*a-j*b)/c);
		}
	}
	printf("%lld\n",ans);
	return 0;
}