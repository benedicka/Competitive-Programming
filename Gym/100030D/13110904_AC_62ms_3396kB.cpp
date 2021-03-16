#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
	long long ans = 0,n,k,c = 1;
	scanf("%lld %lld",&n,&k);
	n-=1;
	while(n>0)
	{
		n-=c*k;
		c+=c*k;
		//printf("c = %lld n = %lld\n",c,n);
		ans++;
	}
	printf("%lld\n",ans);
	return 0;
}