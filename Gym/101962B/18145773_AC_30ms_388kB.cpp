#include<bits/stdc++.h>
using namespace std;
string s,t,t_r;
int ls,lt,ans,cnt;
bool ok1,ok0,ok;
map < char , char > mp;
int main()
{
	cin>>s>>t;
	ls = s.size();
	lt = t.size();
	for(int i=lt-1;i>=0;i--)
	{
		t_r+=t[i];
	}
	for(int i=0;i<=ls-lt;i++)
	{
		mp.clear();
		ok = 1;
		ok1 = ok0 = 0;
		for(int j=i;j<i+lt;j++)
		{
			if(t[j-i]=='1' && !ok1)
			{
				ok1 = 1;
				mp['1'] = s[j];
				continue;
			}
			if(t[j-i]=='0' && !ok0)
			{
				ok0 = 1;
				mp['0'] = s[j];
				continue;
			}
			if(t[j-i]=='1' && mp[t[j-i]]!=s[j])
			{
				ok  =0;
				break;
			}
			if(t[j-i]=='0' && mp[t[j-i]]!=s[j])
			{
				ok  =0;
				break;
			}
		}
		if(ok) ans++;
		else
		{
			mp.clear();
			ok = 1;
			ok1 = ok0 = 0;
			for(int j=i;j<i+lt;j++)
			{
				if(t_r[j-i]=='1' && !ok1)
				{
					ok1 = 1;
					mp['1'] = s[j];
					continue;
				}
				if(t_r[j-i]=='0' && !ok0)
				{
					ok0 = 1;
					mp['0'] = s[j];
					continue;
				}
				if(t_r[j-i]=='1' && mp[t_r[j-i]]!=s[j])
				{
					ok  =0;
					break;
				}
				if(t_r[j-i]=='0' && mp[t_r[j-i]]!=s[j])
				{
					ok  =0;
					break;
				}
			}
			if(ok) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}