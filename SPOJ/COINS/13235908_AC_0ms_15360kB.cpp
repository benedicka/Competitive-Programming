#include<stdio.h>
#include<map>
#include<algorithm>
using namespace std;
map < long long,long long > memo;
long long f(long long x)
{
	if(x==0) return 0;
	else
	{
		if(memo[x]!=0) return memo[x];
		memo[x] = max(x,f(x/2)+f(x/3)+f(x/4));
		return memo[x]; 
	}
}
int main()
{
	long long a,ans;
	while(scanf("%lld",&a)!=EOF)
	{
		f(a);
		printf("%lld\n",memo[a]);
	}

	
	
	return 0;
}