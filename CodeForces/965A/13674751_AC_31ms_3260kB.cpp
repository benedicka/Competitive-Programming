#include<stdio.h>

int main()
{
	int k,n,s,p,ans;
	scanf("%d %d %d %d",&k,&n,&s,&p);
	ans = n/s;
	if(n%s!=0) ans++;
	ans*=k;
	n=ans/p;
	if(ans%p!=0) n++;
	printf("%d\n",n);
	return 0;
}