#include<stdio.h>
#include<stdlib.h>
long long h,m,s,c,ha,sum;
int main()
{
	while(scanf("%2lld%2lld%2lld%2lld",&h,&m,&s,&c)!=EOF)
	{
		sum =h*60*60*100+m*60*100+s*100+c;
		printf("%07lld\n",sum*1000/864);
	}
	return 0;
}