#include<bits/stdc++.h>
using namespace std;
struct data
{
	long long a,b;
}num[4];
long t,x,y;
long long gcd(long long a, long long b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	long long ans1,ans2,tmp;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld/%lld %lld/%lld %lld/%lld",&num[0].a,&num[0].b,&num[1].a,&num[1].b,&num[2].a,&num[2].b);
		ans2 = num[0].b*num[1].b/gcd(num[0].b,num[1].b);
		ans2 = ans2*num[2].b/gcd(ans2,num[2].b);
		ans1 = num[0].a*(ans2/num[0].b) + num[2].a*(ans2/num[2].b) +num[1].a*(ans2/num[1].b);
		tmp = gcd(ans1,ans2);
		printf("%lld/%lld\n",ans1/tmp,ans2/tmp);
	}
	return 0;
}