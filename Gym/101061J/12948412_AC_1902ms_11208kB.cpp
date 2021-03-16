#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
long long t,n,m,c[100001],x,y[1000001],b[100001],sisa,s;

int main()
{

	scanf("%d",&t);
	while(t--)
	{
		sisa = 0;
		scanf("%lld %lld",&n,&m);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&c[i]);
			b[i] = c[i];
			y[i] = 0;
		}
		s=0;
		int maks = 0;
		for(int i=0;i<m;i++)
		{
			scanf("%lld",&x);
			//isi(x-1,y);
			if(maks<x) maks = x;
			scanf("%lld",&s);
			y[x-1]+=s;
			
			
		}
		for(int i=0;i<=maks;i++)
		{
			x = i;
			while(x<n)
			{
				if(c[x]>y[i])
				{
					c[x]-=y[i];
					y[i]=0;
					x++;
				}
				else
				{
					y[i]-=c[x];
					c[x] = 0;
					x++;
				}
				if(y[i]==0) break;
				
			}
			if(y[i]!=0) sisa+=y[i];
		}
		printf("%lld\n",sisa);
		for(int i=0;i<n;i++)
		{
			printf("%lld",b[i]-c[i]);
			if(i<n-1) printf(" ");
			else printf("\n");
		}
		
	}
	
	
	return 0;
}