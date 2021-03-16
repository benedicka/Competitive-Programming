#include<bits/stdc++.h>
using namespace std;
long long x;
int main()
{
	scanf("%lld",&x);
	for(int i=0;i<x;i++)
	{
		if(i!=0) cout<<" ";
		cout<<1000000000-i;
	}	
	cout<<endl;
	return 0;
}