#include<bits/stdc++.h>
using namespace std;
long long n,l,r,m,x,ans,v;
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x);
		ans+=((i%2!=n%2)?1:-1)*x;
	}
	scanf("%lld",&m);
	//printf("c = %lld\n",ans);
	while(m--)
	{
		scanf("%lld %lld %lld",&l,&r,&v);
		l-=1;
		r-=1;
		if((r-l+1)%2!=0)
		{
			ans+=((r%2!=n%2)?1:-1)*v;
		}
		printf("%lld\n",ans);
	}
	return 0;
}