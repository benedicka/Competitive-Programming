#include<bits/stdc++.h>
using namespace std;
long double n,m,k,ans;
int main()
{
   	cin>>n>>m>>k;
   	if(m>=k)
   	{
   		ans = ((k-1)*(n+m-k+1)+(m-k+1))/(k*(n+m-k+1));
   		cout<<setprecision(9)<<ans<<endl;
	}
	else
	{
		ans = m/k;
		cout<<setprecision(9)<<ans<<endl;
	}
    return 0;
}
