#include<bits/stdc++.h>
using namespace std;
long long t, a[100010],ans;
int n,cnt;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		ans = 0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		ans = a[n-1];
		cnt = n;
		for(int i=n-2;i>=0;i--)
		{
			ans+=(cnt*a[i]);
			cnt--;
		}
		cout<<ans<<endl;
	}
	return 0;
}