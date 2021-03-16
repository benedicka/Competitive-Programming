#include<stdio.h>
#include<string>
#include<iostream>
#include<map>
using namespace std;
map<char , int > mp;
int ans;
bool ok;
int main()
{
	string x;
	cin>>x;
	int l = x.size();
	for(int i=0;i<l;i++)
	{
		mp[x[i]]++;
	}
	ok = 1;
	for(int i='a';i<='z';i++)
	{
		char tmp = i;
		if(mp[tmp]%2!=0 && !ok)
		{
			ans++;
		}
		else if(ok && mp[tmp]%2!=0) ok = 0;
	}
	printf("%d\n",ans);
	return 0;
}