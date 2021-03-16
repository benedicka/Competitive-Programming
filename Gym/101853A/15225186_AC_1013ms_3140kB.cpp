#include<stdio.h>
#include<map>
#include<utility>
using namespace std;
int t,n,q,x,u,v,total,a[100010];
map< int ,int >mp;
int main()
{
	total = 0;
	scanf("%d",&t);
	while(t--)
	{
		mp.clear();
		total = 0;
		scanf("%d %d",&n,&q);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(mp[a[i]]==0 && a[i]!=0) total++;
			mp[a[i]]++;
		}
		while(q--)
		{
			scanf("%d",&x);
			if(x==2)
			{
				printf("%d\n",total);
			}
			else
			{
				scanf("%d %d",&u,&v);
				mp[a[u-1]]-=1;
				if(mp[a[u-1]]==0 && a[u-1]!=0) total--;
				a[u-1]  =v;
				if(mp[v]==0 && v!=0) total++;
				mp[v]+=1;
			}
		}
	}
	return 0;
}