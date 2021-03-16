#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,r;
	r = 1e7;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i!=1) cout<<" ";
		cout<<(1<<i);
	}
	cout<<endl;
	return 0;
}