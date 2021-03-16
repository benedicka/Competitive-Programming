#include<bits/stdc++.h>
using namespace std;
string x[1010],tmp;
int t,cnt,n,m;
map < string , int > mp;
bool cmp(string a,string b)
{
	if(mp[a]!=mp[b])return(mp[a]>mp[b]);
	return a<b;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		mp.clear();
		cnt = 0;
		while(n--)
		{
			cin>>tmp;
			scanf("%d",&m);
			x[cnt] = tmp;
			if(mp[tmp]==0) cnt++;
			mp[tmp]+=m;
		}
		sort(x,x+cnt,cmp);
		//cout<<"ans : "<<endl;
		printf("%d\n",cnt);
		for(int i=0;i<cnt;i++)
		{
			cout<<x[i]<<" "<<mp[x[i]]<<'\n';
		}
	}
	return 0;
}