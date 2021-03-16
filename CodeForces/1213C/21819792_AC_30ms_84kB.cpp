#include<bits/stdc++.h>
using namespace std;
long long q,n,m,md,x[10010],cnt,ans,sum;

int main()
{
	scanf("%lld",&q);
	while(q--)
	{
		scanf("%lld %lld",&n,&m);
		md = m%10;
		cnt = 1;
		sum = 0;
		do
		{		
			x[cnt++] = md%10;
			sum+=x[cnt-1];
			md+=(m%10);
			md%=10;
		}while(md!=(long long)0);
		ans = sum*(n/(m*cnt));
		//printf("cek  = %lld %lld %lld\n",cnt,n/(m*cnt),sum);
		for(int i=1;i<=(n/m)%cnt;i++)
		{
			ans+=x[i];
		}
		printf("%lld\n",ans);
	}
	return 0;
}