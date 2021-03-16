#include<bits/stdc++.h>
using namespace std;
int n,x[1000010],ans;
map < int , int > mp;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(mp[x[i]]==0)
		{
			ans++;
			mp[x[i]-1]+=1;
		}
		else
		{
			mp[x[i]]-=1;
			mp[x[i]-1]+=1;
		}
	}
	printf("%d\n",ans);
	return 0;
}