#include<bits/stdc++.h>
using namespace std;
int t,a,b;
bool ok = 0;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		if(a>b) swap(a,b);
		ok = 1;
		if((a+b)%3) ok = 0;
		if(2*a<b) ok = 0;
		printf("%s\n",ok?"YES":"NO");
	}
	return 0;
}