#include<bits/stdc++.h>
using namespace std;

int main()
{
	int l,r,t,n,px=0,py=0;
	char x[200010];
	pair < long long , long long > pos;
	map < pair < long long, long long > ,int > mp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",&x);
		px = py = 0;
		mp.clear();
		l = r = -1;
		mp[make_pair(px,py)] = 1;
		for(int i=1;i<=n;i++)
		{
			if(x[i-1]=='L') px-=1;
			else if(x[i-1]=='R') px+=1;
			else if(x[i-1]=='U') py+=1;
			else if(x[i-1]=='D') py-=1;
			pos = make_pair(px,py);
			//printf("%d %d %d\n",px,py,mp[pos]);
			if(mp[pos])
			{
				if(l==-1|| (r-l>i-mp[pos]))
				{
					l = mp[pos];
					r = i;
				}
			}
			mp[pos] = i+1;
		}
		if(l==-1) printf("-1\n");
		else printf("%d %d\n",l,r);
	}
	return 0;
}