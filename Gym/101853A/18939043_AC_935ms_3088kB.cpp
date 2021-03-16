#include<bits/stdc++.h>
using namespace std;
int t,n,q,ans,a,x[100010],p,v;
map < int , int > mp;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		mp.clear();
		ans = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
			mp[x[i]]++;
			if(x[i]!=0 && mp[x[i]]==1) ans++;
		}
		while(q--)
		{
			scanf("%d",&a);
			if(a==2)
			{
				printf("%d\n",ans);
			}
			else
			{
				scanf("%d %d",&p,&v);
				p-=1;
				if(x[p]!=v)
				{
					if(x[p]==0)
					{
						mp[v]++;
						if(mp[v]==1) ans++;
						x[p] = v;
					}
					else if(v==0)
					{
						mp[x[p]]--;
						if(mp[x[p]]==0) ans--;
						x[p] = 0;
					}
					else
					{
						mp[v]++;
						mp[x[p]]--;
						if(mp[x[p]]==0) ans--;
						if(mp[v]==1) ans++;
						x[p] = v;
					}
				}
			}
		}
	}
	return 0;
}