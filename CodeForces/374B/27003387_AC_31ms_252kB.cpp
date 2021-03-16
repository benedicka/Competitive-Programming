#include<bits/stdc++.h>
using namespace std;
string x;
long long cnt,ans;
long long prob(long long a)
{
	if(a%2) return(a+1)/2;
	else return 1;
}
int main()
{
	cin>>x;
	ans = 1;
	for(int i=1;i<x.size();i++)
	{
		if(x[i]+x[i-1]-2*'0'==9)
		{
			cnt++;
		}
		else
		{
		//	printf("%d. %lld\n",i,cnt);
			if(cnt>1)
			{
				ans*=prob(cnt+1);
			}
			cnt = 0;
		}
	}
	if(cnt>1) ans*=prob(cnt+1);
	printf("%lld\n",ans);
	return 0;
}
