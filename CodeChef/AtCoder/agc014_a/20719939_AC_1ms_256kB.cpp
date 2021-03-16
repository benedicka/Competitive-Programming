#include<bits/stdc++.h>
using namespace std;
int ans,x[4],tmp[4];
map< pair < int , pair < int, int > > , bool > mp;
int main()
{
	for(int i=0;i<3;i++)
	{
		scanf("%d",&x[i]);
	}
	sort(x,x+3);
	while(1)
	{
		if(x[0]%2 || x[1]%2 || x[2]%2) break;
		ans++;
		for(int i=0;i<3;i++)
		{
			tmp[i] = (x[(i+1)%3]+x[(i+2)%3])/2;
		}
		sort(tmp,tmp+3);
		for(int i=0;i<3;i++)
		{
			x[i] = tmp[i];
		}
		if(mp[make_pair(x[0],make_pair(x[1],x[2]))])
		{
			ans = -1;
			break;
		}
		else
		{
			mp[make_pair(x[0],make_pair(x[1],x[2]))] = 1;
		}
	}
	printf("%d\n",ans);
	return 0;
}