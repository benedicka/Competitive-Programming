#include<bits/stdc++.h>
using namespace std;
int t,ans;
int n,a;
map < int , int > mp;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		mp.clear();
		ans = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			mp[a] = mp[a-1]+1;
			ans = max(ans,mp[a]);
		}
		printf("%d\n",ans);
	}
	return 0;
}