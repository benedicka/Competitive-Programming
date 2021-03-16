#include<bits/stdc++.h>
using namespace std;
long long t,n,x[1010],lis[1010],cnt[1010],ans1,ans2;
const long long md = 1e9 + 7;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&ans1,&ans2);
		printf("%s\n",ans1==ans2?"Iskandar":(ans1>ans2?"Bashar":"Hamada"));
	}
	return 0;
}