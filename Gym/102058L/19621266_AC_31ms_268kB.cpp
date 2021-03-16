#include<bits/stdc++.h>
using namespace std;
char s[250010];
long long k,a,b;
bool ok = 1;

int main()
{
	scanf("%s %lld",s,&k);
	a = 0;
	b = strlen(s)-1;
	
	while(a<b)
	{
		if(s[a]!=s[b])
		{
			
			ok = 0;
			break;
		}
		a++;
		b--;
	}
	printf("%s\n",ok?"YES":"NO");
	return 0;
}