#include<bits/stdc++.h>
using namespace std;
map < char , int > mp;
bool ok;
int cnt,sz;
string x,y;
int main()
{
	getline(cin,x);
	getline(cin,y);
	sz = x.size();
	ok =1 ;
	for(int i=0;i<sz;i++)
	{
		if(x[i]!=' ')mp[x[i]]++;
	}
	sz = y.size();
	for(int i=0;i<sz;i++)
	{
		if(y[i]!=' ')mp[y[i]]--;
		if(mp[y[i]]<0)
		{
			ok = 0;
			break;
		}
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}