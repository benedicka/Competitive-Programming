#include<stdio.h>
long long s,g;
int main()
{
	scanf("%lld %lld",&s,&g);
	if(s%g!=0 || s==g) printf("-1\n");
	else printf("%lld %lld\n",s-g,g);
	return 0;
}