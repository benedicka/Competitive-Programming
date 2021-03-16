#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long n,h,ans,x[2010],diff[2010],cnt;
bool ok = 1;

int main ()
{
	scanf("%lld %lld",&n,&h);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
		diff[i] = h-x[i];
		if(diff[i]<0) ok = 0;
	}
	ans = 1;
	cnt = diff[0]!=0;
	if(diff[0]>1 || diff[n-1]>1) ans = 0;
	if(ok)
	{
		for(int i=1;i<n;i++)
		{	
			if(cnt<0 || abs(diff[i]-diff[i-1])>1)
			{
				ok = 0;
				break;
			}
			if(diff[i]-diff[i-1]==1)
            {
                cnt++;
            }
            else if(diff[i]==diff[i-1])
            {
                ans*=(cnt+1);
                ans%=mod;
            }
            else
            {
                ans*=cnt;
                ans%=mod;
                cnt--;
            }
		}
	}
	printf("%lld\n",ok?ans:0);
	return 0;
}