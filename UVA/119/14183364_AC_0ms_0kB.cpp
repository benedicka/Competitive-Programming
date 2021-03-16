#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
#include<iostream>
using namespace std;
string nama[20],tmp,to;
int n,x,gift,z;
map < string , double> mp;

int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		if(z==1) cout<<endl;
		mp.clear();
		z = 1;
		for(int i=0;i<n;i++)
		{
			cin>>nama[i];
			mp[nama[i]]  =0;
		}
		for(int i=0;i<n;i++)
		{
			cin>>tmp>>gift>>x;
			if(x!=0)mp[tmp]-=(gift/x)*x;
			for(int i=0;i<x;i++)
			{
				cin>>to;
				mp[to]+=(gift/x);
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<nama[i]<<" "<<(int)mp[nama[i]]<<endl;
		}
	}
	return 0;
}