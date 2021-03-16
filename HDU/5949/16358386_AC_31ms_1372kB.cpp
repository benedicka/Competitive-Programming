#include<bits/stdc++.h>
using namespace std;
long long ans,n,m[4],l;
char x[1001];
int get_idx(char x)
{
	if(x=='H') return 0;
	if(x=='O') return 1;
	return 2;
}
int main()
{
	m[0] = 1;
	m[1] = 16;
	m[2] = 12;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%s",&x);
		l = strlen(x);
		ans = 0;
		for(int i=0;i<l;i++)
		{
			ans+=m[get_idx(x[i])];
		}
		printf("%lld\n",ans);
	}
	return 0;
}