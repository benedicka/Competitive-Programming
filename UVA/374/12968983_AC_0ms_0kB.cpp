#include<stdio.h>
long long x,y,n,t;
long long fast(long long x,long long y)
{
        if(y==0) return 1;
	if(y==1) return x;
	long long temp = (fast(x,y/2));
	if(y%2==0) return ((temp%n)*(temp%n))%n;
	else return ((((temp%n)*(temp%n))%n*(x%n))%n);	
}

int main()
{
	int d = 1;
	while(scanf("%lld %lld %lld",&x,&y,&n)!=EOF)
	{
		
		long long ans;
		ans = fast(x,y);
		printf("%lld\n",ans%n);
	}
	return 0;
}