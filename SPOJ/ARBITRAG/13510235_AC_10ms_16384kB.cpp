#include <stdio.h>
#include <string>
#include <map>
#include <iostream>
using namespace std;
int main()
{
	bool ok;
	string input,a,b;
	double x[40][40];
	map < string , int>  mp;
	int n=1,m,tc;
	double z;
	for(int i=0;i<30;i++)
	{
		for(int j=0;j<30;j++)
		{
			x[i][j] = 0;
		}
	}
	tc = 1;
	while(n!=0)
	{
		ok = 0;
	
		mp.clear();
		cin>>n;
		if(n==0) break;
		
		ok = 0;
		for(int i=0;i<n;i++)
		{
			cin>>input;
			mp[input] = i;
		}
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>a>>z>>b;
			x[mp[a]][mp[b]] = z;
		}
		
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(x[i][j]<x[i][k]*x[k][j]) x[i][j] = x[i][k]*x[k][j];
					
				}
				if(ok==1) break;
			}
			if(ok==1) break;
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j && x[i][j]>1) ok =1;
				x[i][j] = 0;
			}
		}
		if(ok==1) cout<<"Case "<<tc<<": Yes"<<endl;
		else cout<<"Case "<<tc<<": No"<<endl;
		tc++;
	}
	return 0;
}