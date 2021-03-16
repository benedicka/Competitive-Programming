#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long long a,b,tmp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
		if(a>b) swap(a,b);
		long long ans1 = a+b-((a+b)/2),ans2 = a+b-ans1;
		if(min(ans1,ans2)==a && max(ans1,ans2)==b) printf("Ok\n");
		else printf("%lld %lld\n",min(ans1,ans2),max(ans1,ans2));
	}
	return 0;
}