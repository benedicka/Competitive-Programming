#include<bits/stdc++.h>
using namespace std;
long long n,k,p,q,tmp,gcd,mx,jum;

int main()
{
	while(1)
	{
		scanf("%lld %lld",&n,&k);
		if(n==k && n==-1) break;
		q = (n*(n-1))/2;
		tmp = n;
		mx = k-2;
		if(mx<=0)
		{
			p = 0;
		}
		else
		{
			if(mx%2==0)
			{
				jum = ((mx-2)/2)+1;
			//	printf("jum = %lld\n",jum);
				mx = jum*(2+mx)/2;
			}
			else
			{
				jum = ((mx-1)/2)+1;
				mx = jum*(1+mx)/2;
			}
			p = mx;
		}
	//	printf("c : %lld %lld\n",p,q);
		gcd  = __gcd(p,q);
		if(!p) printf("0\n");
		else if(p==q) printf("1\n");
		else printf("%lld/%lld\n",p/gcd,q/gcd);
	}
	return 0;
}