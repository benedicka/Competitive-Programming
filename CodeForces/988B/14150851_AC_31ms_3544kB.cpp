#include<stdio.h>
#include<algorithm>
#include<string>
#include<string.h>
#include<iostream>
#include<map>
using namespace std;
int n;
string input[1100],x[1010],tmp,z;
map< string , int > mp;
bool ok;

bool comp(string& a, string& b)
{

	if(a.size()<b.size())return 1;
	else return 0;
}
bool cek()
{
	if(tmp.find(z)!=string::npos) return 1;
	return 0;
}
int main()
{
	ok = 1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
		x[i] = input[i];
		//sort(x[i].begin(),x[i].end());
		mp[x[i]] = i;
	}
	sort(x,x+n,comp);
	for(int i=1;i<n;i++)
	{
		if(!ok) break;
		tmp = input[mp[x[i]]];
		z = input[mp[x[i-1]]];
		if(!cek())
		{
			ok = 0;
		}
	}
	if(!ok) cout<<"NO"<<endl;
	else
	{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<input[mp[x[i]]]<<endl;
		}
	}
	return 0;
}