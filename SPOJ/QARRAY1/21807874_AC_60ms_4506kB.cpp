#include<bits/stdc++.h>
using namespace std;
long long n,q,l,r,v,x[100010],ans;
int main()
{
	scanf("%lld %lld",&n,&q);
	while(q--)
	{
		scanf("%lld %lld %lld",&l,&r,&v);
		x[l-1]+=v;
		x[r]-=v;
	}
	for(int i=0;i<n;i++)
	{
		if(i) printf(" ");
		ans+=x[i];
		printf("%lld",ans);
	}
	return 0;
}