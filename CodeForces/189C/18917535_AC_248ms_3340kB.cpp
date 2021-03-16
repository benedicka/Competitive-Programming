#include<bits/stdc++.h>
using namespace std;
long long idx[200010],x[200010],y,n,cnt=1,ans,now;
bool ubah[200010];
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&y);
		idx[y] = i;
	}
	for(int i=1;i<n;i++)
	{
		if(idx[x[i]]<idx[x[i-1]])
		{
			break;
		}
		cnt++;
	}
	printf("%lld\n",n-cnt);
	return 0;
}