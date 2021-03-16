#include<bits/stdc++.h>
using namespace std;
string x[1000010],input;
int n,mp[30],cnt,jum;
map < string , long long > mpa;
long long ans;

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		cin>>input;
		cnt = 0;
		memset(mp,-1,sizeof(mp));
		for(int i=0;i<input.size();i++)
		{
			if(mp[input[i]-'a']==-1)
			{
				mp[input[i]-'a'] = cnt;
				cnt++;
			}
			input[i] = mp[input[i]-'a']+'a';
		}
		mpa[input]++;
		if(mpa[input]==1) 
		{
			x[jum++] = input;
		}
	}
	for(int i=0;i<jum;i++)
	{
		mpa[x[i]]-=1;
		ans+=mpa[x[i]]*(1+mpa[x[i]])/2;
	}
	printf("%lld\n",ans);
	return 0;
}