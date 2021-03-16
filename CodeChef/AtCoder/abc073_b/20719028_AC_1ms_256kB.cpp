#include<bits/stdc++.h>
using namespace std;
int n,l,r,ans;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&l,&r);
		ans+=(r-l+1);
	}
	printf("%d\n",ans);
	return 0;
}