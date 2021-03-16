#include<bits/stdc++.h>
using namespace std;
string a,b;
map < pair < char , char > , int > mp;
bool ok = 1;
int main()
{
	freopen("enchanted.in","r",stdin);
	freopen("enchanted.out","w",stdout);
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		mp[make_pair(a[i],b[a.size()-i-1])]++;
	}
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		if(!ok) break;
		if(mp[make_pair(a[i],b[a.size()-i-1])])mp[make_pair(a[i],b[a.size()-i-1])]--;
		else ok = 0;
	}
	printf("%s\n",ok?"Yes":"No");
	return 0;
}