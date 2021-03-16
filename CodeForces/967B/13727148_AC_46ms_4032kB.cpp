#include<stdio.h>
#include<algorithm>
using namespace std;
int n;
long long a,b,w,s,si[100010],ans,jum;
bool cek()
{
	long long hitung;
	hitung = (s*a)/jum;
//	printf("%lld %lld %lld %lld\n",s,a,jum,hitung);
//	printf("%lld\n",hitung);
	if(hitung>=b) return 1;
	return 0;
}
int main()
{
	ans = 0;
	scanf("%d %lld %lld",&n,&a,&b);
	jum = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&si[i]);
		if(i==0)
		{
			s = si[i];
			jum+=s;
			si[i] = -1;
		}
		else jum+=si[i];
	}
	sort(si,si+n);
	n-=1;
	for(int i=n;i>0;i--)
	{
		if(cek()) break;
		else
		{
			jum-=si[i];
			ans++;
		}
	}
	printf("%lld\n",ans);
	return 0;
}