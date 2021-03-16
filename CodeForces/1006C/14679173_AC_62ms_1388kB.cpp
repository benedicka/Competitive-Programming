#include<stdio.h>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
	long long n,a[200010],ans,jum1,jum2;
	int l,r;
	ans = jum1 = jum2 = 0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	l = 0;
	r = n-1;
	while(l<=r)
	{
		
		if(jum2>=jum1)
		{
			jum1+=a[l];
			l++;
		}
		else
		{
			jum2+=a[r];
			r--;
		}
		if(jum1==jum2)
		{
			ans = jum1;
		}
	}
	printf("%lld\n",ans);
	return 0;
}