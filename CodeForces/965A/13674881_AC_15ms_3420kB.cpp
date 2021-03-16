#include<stdio.h>

int main()
{
	int k,n,s,p,ans;
	scanf("%d %d %d %d",&k,&n,&s,&p);
	ans = (n%s==0?n/s:n/s+1);
	ans*=k;
	ans = (ans%p==0?ans/p:ans/p+1);
	printf("%d\n",ans);
	return 0;
}