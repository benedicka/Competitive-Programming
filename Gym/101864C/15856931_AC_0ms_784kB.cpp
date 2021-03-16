#include<bits/stdc++.h>
using namespace std;
long long n,m,sum,a[100010],t;
bool ok = 0;
int main()
{
	scanf("%lld",&t);
	for(int tc = 1;tc<=t;tc++)
	{
		ok = sum =  0;
		scanf("%lld %lld",&m,&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(i>0)
			{
				if(a[i]-1==a[i-1]) ok = 1;
			}
			sum+=a[i];
		}
		printf("Case %d: Thank You BACS!!! %s %s\n",tc,sum==m?"Thik ache.":"Bojjat dokandar!!",ok?"Yes":"No");
	}
	
	return 0;
}