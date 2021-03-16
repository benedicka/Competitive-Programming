#include<bits/stdc++.h>
using namespace std;
long long n,x,tmp,ans;

int main()
{
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld",&x);
		tmp = x%4;
		if(tmp==0) ans = x;
		else if(tmp==1) ans = 1;
		else if(tmp==2) ans = x+1;
		else ans = 0;
		printf("%lld\n",ans);
	}
	return 0;
}