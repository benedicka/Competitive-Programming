#include<stdio.h>
#include<set>
#include<map>
using namespace std;
int main()
{
	map < int , int > q;
	set <int> list;
	int t,n,f,ans,jum;
	char x[110];
	scanf("%d",&t);
	while(t--)
	{
		jum =  0;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%s %d",&x,&f);
			list.insert(f);
			q[f]++;
		}
		for(set<int>::iterator it =list.begin(); it!=list.end(); it++)
		{
			if(q[*it]>=jum)
			{
				if(q[*it]==jum && *it<ans)
				{
					ans = *it;
				}
				else if(q[*it]>jum)
				{
					ans = *it;
					jum = q[*it];
				}
			}
		}
		printf("%d\n",ans);
		q.clear();
		list.clear();
	}
	
	
	return 0;
}