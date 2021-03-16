#include<stdio.h>

int main()
{
	int k,n,s,p,ans;
	scanf("%d %d %d %d",&k,&n,&s,&p);
	ans = 0;
	if(n%s==0) ans = n/s;
	else ans = n/s+1;
	ans*=k;
	if(ans%p==0) ans/=p;
	else ans = ans/p+1;
	printf("%d\n",ans);
	return 0;
}