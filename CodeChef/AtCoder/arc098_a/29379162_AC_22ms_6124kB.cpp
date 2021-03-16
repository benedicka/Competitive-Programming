#include<bits/stdc++.h>
using namespace std;
string s;
int n,pref[300010],suff[300010],ans;
int main()
{
	cin>>n>>s;
	ans = n;
	for(int i=1;i<=n;i++)
	{
		pref[i] = pref[i-1]+(s[i-1]=='W');
	}
	for(int i=n;i>=1;i--)
	{
   		suff[i] = suff[i+1]+(s[i-1]=='E');
  	}
  	for(int i=1;i<=n;i++)
  	{
  		ans = min(ans,pref[i-1]+suff[i+1]);	
	}
	cout<<ans<<"\n";
	return 0;
}