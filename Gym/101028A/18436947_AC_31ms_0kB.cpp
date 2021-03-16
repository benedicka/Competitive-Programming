#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,x,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&x);
		while(n--)
		{
			scanf("%d",&a);
			x-=a;
		}
		printf("%s\n",x==1500?"Correct":"Bug");
	}
	return 0;
}