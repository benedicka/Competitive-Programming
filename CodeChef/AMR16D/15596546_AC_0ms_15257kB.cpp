#include<bits/stdc++.h>
using namespace std;
bool ok;
int t,n,k;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		if(k%3!=0) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}