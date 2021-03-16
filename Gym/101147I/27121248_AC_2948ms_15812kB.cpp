#include<bits/stdc++.h>
using namespace std;
long long t,n,ans,cnt,sum,x,y,r,m,d;
double tmp;
pair < double, long long > p[1000010];
bool cmp(pair < double, long long >a, pair < double, long long >b)
{
	if(a.first==b.first)
	{
		return a.second>b.second;
	}
	return a.first<b.first;
}
int main()
{
	freopen("walk.in","r",stdin);
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&m);
		ans = sum = cnt = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld %lld %lld",&x,&y,&r);
            if(abs(y)+r>m) continue;
            d = m-r;
            tmp = sqrt((d*d-y*y)*1.0);
            p[cnt++] = make_pair(1.0*x-tmp,r);
           // printf("A : %lf %lld\n",p[cnt-1].first,p[cnt-1].second);
            p[cnt++] = make_pair(1.0*x+tmp,-1*r);
        //    printf("A : %lf %lld\n",p[cnt-1].first,p[cnt-1].second);
		}
		sort(p,p+cnt,cmp);
		for(int i=0;i<cnt;i++)
		{
			sum+=p[i].second;
			ans =max(ans,sum);
		}
		printf("%lld\n",ans);
	}
	return 0;
}