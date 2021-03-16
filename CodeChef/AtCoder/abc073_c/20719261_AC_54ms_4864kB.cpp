#include<bits/stdc++.h>
using namespace std;
int n,ans,x;
map < int , bool > mp;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		if(mp[x])
		{
			ans--;
			mp[x] = 0;
		}
		else
		{
			ans++;
			mp[x] = 1;
		}
	}
	printf("%d\n",ans);
	return 0;
}