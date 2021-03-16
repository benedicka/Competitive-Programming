#include<bits/stdc++.h>
using namespace std;
int n,x[1010],y[1010],a,b,c,ans,cnt,photo=1;
map < pair < int , pair < int , int > > , bool > mp;

int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&x[i],&y[i]);
		}
	//	mp.clear();
		ans = 2;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				a = y[i] - y[j];
				b = x[j] - x[i];
				c = x[j]*y[i] - y[j]*x[i];
			//	if(mp[make_pair(a,make_pair(b,c))]) continue;
				cnt = 2;
				for(int k=j+1;k<n;k++)
				{
					if(a*x[k]+b*y[k]==c) cnt++;
				}
				ans = max(ans,cnt);
				//mp[make_pair(a,make_pair(b,c))] = 1;
			}
		}
		printf("Photo %d:  %d points eliminated\n",photo++,ans>=4?ans:0);
	}
	return 0;
}