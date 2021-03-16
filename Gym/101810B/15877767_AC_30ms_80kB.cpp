#include<bits/stdc++.h>
using namespace std;
long long t,x,n,bagi,ans[10010],jum,a,b,sisa;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&x,&n);
		if(n==1)
		{
			ans[0] = x;
		}
		else if(x>n)
		{
			x-=n;
			jum = x/(n-1);
			sisa = x%(n-1);
			a = jum/2;
			b = jum-a;
		//	printf("jum : %lld sisa : %lld a : %lld b : %lld\n",jum,sisa,a,b);
			for(int i=0;i<n;i++)
			{
				ans[i] = 1;
			}
			
			for(int i=0;i<n-1;i++)
			{
				ans[i]+=b;
			}
			for(int j=n-1;j>0;j--)
			{
				ans[j]+=a;
			}
			if(jum%2==1)
			{
				for(int i=1;i<n-1;i++)
				{
					if(sisa==0) break;
					ans[i]+=1;
					sisa--;
					
				}
			}
			else
			{
				for(int j=n-2;j>0;j--)
				{
					if(sisa==0) break;
					ans[j]+=1;
					sisa--;
				}
			}
		}
		else if(x==n)
		{
			for(int i=1;i<n;i++)
			{
				ans[i] = 1;
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(i<x) ans[i] = 1;
				else ans[i] = 0;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(i!=0) printf(" ");
			printf("%lld",ans[i]);
		}
		printf("\n");
	}
	return 0;
}