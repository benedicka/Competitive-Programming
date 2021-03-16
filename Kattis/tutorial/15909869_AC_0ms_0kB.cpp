#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long m,n,t;
	scanf("%lld %lld %lld",&m,&n,&t);
	if(t==1)
	{
		long long x=1;
		bool ok=1;
		while(n)
		{
			x*=n;
			if(x>m)
			{
				ok = 0;
				break;
			}
			n--;
		}
		if(ok) printf("AC\n");
		else printf("TLE\n");
	}
	else if(t==2)
	{
		long long x = 1;
		for(long long i=1;i<=n;i++)
		{
			x*=2;
			if(x>m) break;
		}
		if(x<=m) printf("AC\n");
		else printf("TLE\n");
	}
	else if(t==3)
	{
		long long x = 1;
		for(long long i=1;i<=4;i++)
		{
			x*=n;
			if(x>m) break;
		}
		if(x<=m) printf("AC\n");
		else printf("TLE\n");
	}
	else if(t==4)
	{
		long long x = 1;
		for(long long i=1;i<=3;i++)
		{
			x*=n;
			if(x>m) break;
		}
		if(x<=m) printf("AC\n");
		else printf("TLE\n");
	}
	else if(t==5)
	{
		long long x = 1;
		for(long long i=1;i<=2;i++)
		{
			x*=n;
			if(x>m) break;
		}
		if(x<=m) printf("AC\n");
		else printf("TLE\n");
	}
	else if(t==6)
	{
		double x;
		x = (double)n*(log10((double)n)/log10(2.0));
		if((double)x<=(double)m) printf("AC\n");
		else printf("TLE\n");
	}
	else
	{
		if((double)n<=(double)m) printf("AC\n");
		else printf("TLE\n");
	}
	return 0;
}