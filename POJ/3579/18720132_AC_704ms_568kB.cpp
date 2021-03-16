#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
long long n,x[100010],l,r,m,med_pos,ans;
bool test(long long med)
{
	long long cnt = 0,idx = 0;;
	for(int i=0;i<n;i++)
	{
		cnt +=(n-(lower_bound(x+i,x+n,x[i]+med)-x));
//		while(idx < n && x[idx]-x[i]<med)
//		{
//		 	idx++;
//		}
//		cnt+=(n-idx);    
	}
	//printf("%lld %lld\n",med,cnt);
	return cnt>med_pos;
}
int main()
{
	while(scanf("%lld",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&x[i]);
		}
		sort(x,x+n);
		l = 0;
		r = x[n-1] - x[0];
		med_pos =n*(n- 1)/4 ;
	//	printf("med_pos = %lld\n",med_pos);
		while(l<=r)
		{
			m = (l+r)/2;
		//	printf("%lld %lld %lld\n",l,m,r);
			if(test(m))
			{
				ans = m;
				l = m+1;			
			}	
			else r = m-1;
		}
		printf("%lld\n",ans);
	}
	return 0;
}