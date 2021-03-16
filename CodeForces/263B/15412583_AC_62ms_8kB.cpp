#include<stdio.h>
#include<math.h>
#include<string>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
int n,k,x[60];
int main()
{
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	sort(x+1,x+n+1);
	if(k<=n)
	{
		if(k!=0) printf("%d %d\n",x[n-k+1],x[n-k+1]);
		else printf("%d %d\n",x[n]+1,x[n]+1);
	}
	else printf("-1\n");
	return 0;
}