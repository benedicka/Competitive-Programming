#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
long long a,b,c,d,st,end,ans=0,st_i,end_i,st_j,end_j,tmp;
int main()
{
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	ans = 0;
	for(int i=1;i<=1000;i++)
	{
		for(int j=1;j<=1000;j++)
		{
			if(i+j<1000 && gcd(i,j)==1)
			{
				st_i = a/i;
				while(st_i*i<a) st_i+=1;
				end_i = b/i;
				while(end_i*i>b) end_i-=1;
				st_j = c/j;
				while(st_j*j<c) st_j+=1;
				end_j = d/j;
				while(end_j*j>d) end_j-=1;
				tmp = min(end_i,end_j) - max(st_i,st_j) + 1;
				if(tmp>=0)ans+=tmp;
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
}