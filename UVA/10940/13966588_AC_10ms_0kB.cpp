#include<queue>
#include<stdio.h>
using namespace std;
int main()
{
	int n,ans[500010],x;
	ans[1] = 1;
	ans[2] = 2;
	x = 2;
	for(int i=3;i<=500000;i++)
	{
		if(i<x) x=2;
		ans[i] = x;
		x+=2;
	}
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		printf("%d\n",ans[n]);
	}
	return 0;
}