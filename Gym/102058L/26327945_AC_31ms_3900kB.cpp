#include<bits/stdc++.h>
using namespace std;
char x[250010];
long long t,l,r;
bool ok=1;
int main()
{
	scanf("%s %lld",&x,&t);
	r = strlen(x)-1;
	while(l<r)
	{
		if(x[l]!=x[r])
		{
			ok = 0;
			break;
		}
		l++;
		r--;
	}
	printf("%s\n",ok?"YES":"NO");
	return 0;
}