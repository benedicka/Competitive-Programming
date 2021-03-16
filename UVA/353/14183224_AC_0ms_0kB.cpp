#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
#include<iostream>
using namespace std;
string a,tmp;
int cnt,l;
map < string , bool > mp;
bool palindrome()
{
	int l = 0,r = tmp.size()-1;
	while(l<=r)
	{
		if(tmp[l]!=tmp[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main()
{
	while(getline(cin,a))
	{
		cnt = 0 ;
		l = a.size();
		mp.clear();
		for(int i=0;i<l;i++)
		{
			for(int j=1;j<=l-i;j++)
			{
				tmp = a.substr(i,j);
				if(!mp[tmp] && palindrome())
				{
					//cout<<tmp<<endl;
					mp[tmp] = 1;
					cnt++;
				}
			}
		}
		cout<<"The string '"<<a<<"' contains "<<cnt<<" palindromes."<<endl;
	}
	
	return 0;
}