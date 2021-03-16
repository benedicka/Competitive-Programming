#include <bits/stdc++.h>
using namespace std;
string str;
long long n,tmp[5],cnt,x[100010],ans;
map < long long , long long > mp;

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>str;
		for(int j=0;j<str.size();j++)
		{
			x[i]^=((long long)1<<(str[j]-'a'));
		}
	//	cout << str <<" ";
	//	printf("%d\n",x[i]);
		mp[x[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		mp[x[i]]--;
	//	printf("%d %d\n",x[i],mp[x[i]]);
		ans+=mp[x[i]];
		if(!x[i])
		{
			for(int j=0;j<26;j++)
			{
				
				ans+=mp[(long long)1<<j];
			}
		}
		else
		{ 
			for(int j=0;j<26;j++)
			{
				ans+=mp[x[i]^((long long)1<<j)];
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
}