#include<stdio.h>
#include<map>
using namespace std;
int k,m,choose,c,r,cnt;
bool ok;
map< int , bool > mp;
int main()
{
	while(scanf("%d",&k)!=EOF)
	{
		if(k==0) break;
		scanf("%d",&m);
		ok = 1;
		mp.clear();
		for(int i=0;i<k;i++)
		{
			scanf("%d",&choose);
			mp[choose] = 1;
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d",&r,&c);
			cnt = 0;
			for(int j=0;j<r;j++)
			{
				scanf("%d",&choose);
				if(mp[choose]) cnt++;
			}
			if(cnt<c) ok = 0;
		}
		if(ok) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}