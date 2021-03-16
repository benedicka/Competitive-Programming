#include<bits/stdc++.h>
using namespace std;
long long n,t,h,mx,st=0;
int main()
{
	scanf("%lld %lld",&n,&t);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&h);
		mx = max(mx,h);
		st+=h;
		printf("%lld\n",t-st>=0?(t-st)/mx+2: 1);
	}
	return 0;
}