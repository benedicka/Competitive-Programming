#include<math.h>
#include<stdio.h>
#include<vector>
#include<utility>
#include<algorithm>
#include<map>
using namespace std;
int n=65;
bool prime[66];
unsigned long long size,cek,maks;
map < unsigned long long, bool > mp;
vector < unsigned long long > ans;
void sieve()
{
	for(int i=0;i<n;i++)
	{
		prime[i] = 1;
	}
	prime[0] = 0;
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<n;j+=i)
			{
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	sieve();
	maks = 1<<63;
	maks = maks-1+maks;
	for(unsigned long long i=1;i<=65536;i++)
	{
		cek = i*i*i;
		for(long long j=4;j<=64;j++)
		{
			cek*=i;
			if(cek>maks) break;
			if(!prime[j])
			{
				//printf("%llu %llu\n",cek,(unsigned long long)pow(i,j));
				if(cek>0 && !mp[cek])
				{
					ans.push_back(cek);
					mp[cek] = 1;
				}
			}
			if(cek>maks/i) break;
		}
	}
	sort(ans.begin(),ans.end());
	size = ans.size();
	//printf("%llu\n",size);
	//printf("%llu\n",ans[size-1]);
	for(int i=0;i<size;i++)
	{
		printf("%llu\n",ans[i]);
	}
	return 0;
}