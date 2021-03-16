#include<bits/stdc++.h>
using namespace std;
long long l,r,ans,tmp1,tmp2;
int main()
{
	scanf("%lld %lld",&l,&r);
	for(int i=62;i>=0;i--)
	{
		tmp1 = (long long)l&((long long)1<<i);
		tmp2 = (long long)r&((long long)1<<i);
		if(tmp1!=tmp2)
		{
			ans = (((long long)1<<(i+1))-1);
			break;
		}
	}
	printf("%lld\n",ans);
	return 0;
}