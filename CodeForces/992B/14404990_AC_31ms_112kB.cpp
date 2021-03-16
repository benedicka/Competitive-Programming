#include<map>
#include<stdio.h>
using namespace std;
long long fpb(long long a, long long b)
{
	if(b==0) return a;
	else fpb(b,a%b);
}
int main()
{
	long long l,r,gcd,lcm,x,ans;
	scanf("%lld %lld %lld %lld",&l,&r,&gcd,&lcm);
	x = lcm/gcd;
	ans = 0;
	if(lcm%gcd!=0) printf("0\n");
	else
	{
		for(long long i=1;i*i<=x;i++)
		{
			//printf("%lld %lld %lld %lld\n",i,x/i,l,r);
			if(x%i==0 && l<=i*gcd && i*gcd<=r && l<=x*gcd/i && x*gcd/i<=r && fpb(i,x/i)==1)
			{
				//printf("%lld %lld\n",i,x/i);
				if(i!=x/i) ans+=2;
				else ans++;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}