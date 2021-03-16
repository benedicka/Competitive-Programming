#include <bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
typedef long long LL;
LL n,a,b,x[1000010],ans,mx,mn,s1,s2;

int main()
{
	sf("%lld %lld %lld",&n,&a,&b);
	
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
		if(i==0)s1 = s2 = x[i];
		mx+=x[i];
		s1 = max(mx,s1);
		s2 = min(s2,x[i]);
		if(mx<0) mx = 0;
	}
    for(int i=0;i<n;i++)
    {
    	mn+=x[i];
    	s2 = min(mn,s2);
    	if(mn>0) mn = 0;
	}
	printf("%lld\n",max(a*s1+b,a*s2+b));
	return 0;
}