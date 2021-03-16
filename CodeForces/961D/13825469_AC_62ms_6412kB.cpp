#include<stdio.h>
#include<vector>
#include<utility>
using namespace std;
long long n;
pair < long long , long long > input[100010];
vector < long long > vec;
bool ok;
bool line(long long x1,long long y1,long long x2,long long y2,long long p1,long long p2)
{
	if((y1-p2)*(p1-x2)==(p2-y2)*(x1-p1)) return 1;
	return 0;
}
bool cek(long long a,long long b)
{
	vec.clear();
	long long size;
	for(int i=0;i<n;i++)
	{
		if(i!=a && i!=b)
		{
			if(!line(input[a].first,input[a].second,input[b].first,input[b].second,input[i].first,input[i].second))
			{
				vec.push_back(i);
			}
		}
	}
	size = vec.size();
	if(size==2) return 1;
	for(int i=2;i<size;i++)
	{
		if(!line(input[vec[0]].first,input[vec[0]].second,input[vec[1]].first,input[vec[1]].second,input[vec[i]].first,input[vec[i]].second))
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	ok = 0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld",&input[i].first,&input[i].second);
	}
	if(n<=3) printf("YES\n");
	else
	{
		if(cek(1,2) || cek(0,2) || cek (0,1)) ok = 1;
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}