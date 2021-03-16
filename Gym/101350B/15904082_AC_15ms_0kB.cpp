#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		if(a<b) printf("WeWillEatYou\n");
		else printf("FunkyMonkeys\n");
	}
	return 0;
}