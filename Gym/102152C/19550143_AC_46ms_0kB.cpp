#include<bits/stdc++.h>
using namespace std;
int n,m,t;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		n+=m;
		printf("%d\n",n%2?2:12);
	}
	return 0;
}