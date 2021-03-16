#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n,ans;
	cin>>n;
	ans = n*(1+n)/2-(n-1);
	cout<<ans<<endl;
	return 0;
}