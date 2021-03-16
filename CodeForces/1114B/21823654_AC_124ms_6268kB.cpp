#include<bits/stdc++.h>
using namespace std;
long long n,m,k,idx[200010],x[200010],sum,cnt;
pair < long long , long long > p[200010];
bool space = 0;
int main()
{
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
		p[i] = make_pair(x[i],i);
	}
	sort(p,p+n);
//	for(int i=n-1;i>=0;i--)
//	{
//		printf("c : %lld %lld\n",p[i].first,p[i].second);
//	}
	for(int i=n-1;i>=n-m*k;i--)
	{
		sum+=p[i].first;
		//printf("%lld %lld\n",i,sum);
		idx[cnt++] = p[i].second;
	}	
	printf("%lld\n",sum);
	sort(idx,idx+cnt);
//	printf("c : ");
//	for(int i=0;i<m*k-1;i++)
//	{
//		printf("%lld ",idx[i]);
//	}
//	printf("\n");
	cnt = 0;
	int i=0,tmp = 0,st=0,jum=0;
	
	while(cnt<k-1)
	{
		tmp=idx[i++];
		jum++;
		if(jum==m)
		{
			cnt++;
			jum=0;
			if(space) printf(" ");
			printf("%lld",idx[i-1]+1);
			space = 1;
			st = idx[i-1]+1;
		}
	}
	return 0;
}