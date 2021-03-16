#include<bits/stdc++.h>
using namespace std;
int n,a,ans;
map < int , int > mp;

int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			mp[a]++;
			if(mp[a]>=(n+1)/2) ans = a;
		}
		printf("%d\n",ans);
		mp.clear();
	}
	return 0;
}