#include<bits/stdc++.h>
using namespace std;
char x[250010];
int l,a,b;
long long t;
bool palin = 1;
int main()
{
	scanf("%s",&x);
	scanf("%lld",&t);
	l = strlen(x);
	a = 0;
	b = l-1;
	while(a<=b)
	{
		if(x[a]!=x[b])
		{
			palin = 0;
			break;
		}
		a++;
		b--;
	}
	if(palin) printf("YES\n");
	else printf("NO\n");
	return 0;
}