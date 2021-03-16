#include<bits/stdc++.h>
using namespace std;
map<string , int > mp;
string x[110],ans;
int n,cnt=0,tmp=0;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		cin>>x[cnt];
		mp[x[cnt]]+=1;
		if(mp[x[cnt]]==1)
		{
			cnt++;
		}
	}
	for(int i=0;i<cnt;i++)
	{
		if(tmp<mp[x[i]])
		{
			ans = x[i];
			tmp = mp[x[i]];
		}
	}
	cout<<ans<<endl;
	return 0;
}