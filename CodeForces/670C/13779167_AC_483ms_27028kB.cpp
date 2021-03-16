#include<map>
#include<utility>
#include<stdio.h>
#include<queue>
using namespace std;
long long jum,jum_ans,ans,n,m,audio[200010],sub,a,cek1,cek2,jum1,jum2;
map < int , int > mp;
priority_queue < pair < int , pair < int , int > > > pq;
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a);
		mp[a]++;
	}
	scanf("%lld",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%lld",&audio[i]);
	}	
	ans = 1;
	for(int i=0;i<m;i++)
	{
		scanf("%lld",&sub);
		pq.push(make_pair(mp[audio[i]],make_pair (mp[sub],i+1)));
	}
	jum1 = 0;
	jum2 = 0;
	while(!pq.empty())
	{
		cek1=pq.top().first;
		cek2=pq.top().second.first;
		if(cek1<jum1)
		{
			break;
		}
		else if(cek1>jum1 || cek2>jum2) 
		{
			ans = pq.top().second.second;
			jum1 = cek1;
			jum2 = cek2;
		}
		pq.pop();
	}
	printf("%lld\n",ans);
	return 0;
}