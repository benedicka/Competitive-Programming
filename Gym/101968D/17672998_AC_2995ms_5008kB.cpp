#include<bits/stdc++.h>
using namespace std;
long long t,n,k,a[100010],b,cnt,sisa;
map < long long , int > mp;

int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		cnt = 0;
		mp.clear();
		scanf("%lld %lld",&n,&k);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			mp[a[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&b);
			//printf("cek : %lld %d\n",b,mp[b]);
			if(mp[b]<=0)
			{
				cnt+=1;
				sisa = b;
			}
			else 
			{
				
				mp[b]-=1;
			}
		}
		//printf("cnt = %lld\n",cnt);
		if(cnt==0) printf("YES\n");
		else if(cnt>1) printf("NO\n");
		else
		{
			bool ok = 0;
			for(int i=0;i<n;i++)
			{
				if(mp[a[i]] && abs(a[i]-sisa)<=k)
				{
					ok = 1;
					break;
				}
			}
			if(ok) printf("YES\n");
			else printf("NO\n");
		}
	}	
	return 0;
}