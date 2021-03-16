#include<bits/stdc++.h>
using namespace std;
int n,x,even,odd;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		if(x%2) odd++;
		else even++;
	}
	printf("%s\n",odd%2==0?"YES":"NO");
	return 0;
}