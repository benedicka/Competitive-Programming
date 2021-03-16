#include<bits/stdc++.h>
using namespace std;
long long x1,x2,x3,x4,h;

int main()
{
	cin>>x1>>x2>>x3>>x4>>h;
	if(x3<x1)
	{
		swap(x3,x1);
		swap(x2,x4);
	}
	if(x3>=x2) cout<<0<<endl;
	else
	{
		cout<<(min(x4,x2)-x3)*h<<endl;
	}	
	return 0;
}