#include<stdio.h>
long long x,y,n,t;
long long fast(long long x,long long y)
{
	if(y==1) return x%n;
	int temp = (fast(x,y/2))%n;
	if(y%2==0) return ((temp%n)*(temp%n))%n;
	else return ((temp%n)*(temp%n)*(x%n))%n;	
}

int main()
{
	int c;
	scanf("%lld",&t);	
	while(t--)
	{
		
		scanf("%lld %lld %lld",&x,&y,&n);
		int ans;
		ans = fast(x,y);
		printf("%lld\n",ans);
	}
	scanf("%d",&c);
	return 0;
}