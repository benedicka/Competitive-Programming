#include<bits/stdc++.h>
using namespace std;
string a,b;
int n,m;
map < string ,  string > mp;
int main()
{ 
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		mp[a] = b;
		mp[b] = a;
	}
	for(int i=0;i<n;i++)
	{
		if(i!=0) cout<<" ";
		cin>>a;
		if(a.size()>mp[a].size()) cout<<mp[a];
		else cout<<a;
	}
	cout<<endl;
	return 0;
}