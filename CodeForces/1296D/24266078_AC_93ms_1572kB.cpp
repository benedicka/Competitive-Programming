#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,a,ans=0,b,k,x[200010],turn=0,sum;
	scanf("%lld %lld %lld %lld",&n,&a,&b,&k);
	sum = a+b;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
		x[i]%=sum;
		if(!x[i]) x[i] = a+b;
		x[i] = (x[i]-a)/a + ((x[i]-a)%a>0);
	}
	sort(x,x+n);
	for(int i=0;i<n;i++)
	{
		if(k-x[i]<0) break;
		k-=x[i];
		ans++;
	}
	printf("%lld\n",ans);
	return 0;
}