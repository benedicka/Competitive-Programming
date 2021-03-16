#include<bits/stdc++.h>
using namespace std;
string str;
long long a,ans,sum;
map < long long , long long > mp;
set < int > pos;
int main()
{
	scanf("%lld",&a);
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		sum = 0;
		for(int j=i;j<str.size();j++)
		{
			sum+=(str[j]-'0');
			mp[sum]++;
		}
	}
	if(!a)
	{
		ans = ((str.size()*(str.size()+1))*mp[0])-mp[0]*mp[0];
	}
	else
	{
		for(int i=1;i*i<=a;i++)
		{
			if(mp[i] && a%i==0)
			{
				ans+=(i==a/i?1:2)*mp[i]*mp[a/i];
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
}