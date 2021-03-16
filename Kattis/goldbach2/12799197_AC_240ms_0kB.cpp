#include<stdio.h>
#include<algorithm>
using namespace std;
bool  num[32001];
int primelist[32001],n = 32001,N =1;


void prime()
{
	for(int i=0;i<n;i++)
	{
		num[i] = 1;
	}
	num[0] = 0;
	num[1] = 0;
	for (int i=3;i*i<n;i+=2)
	{
		if(num[i]==1)
		{
			for(int j=i+i;j<n;j+=i)
			{
				num[j] = 0;
			}
		}
	}
	primelist[0] = 2;
	for (int i=3;i<n;i+=2)
	{
		if(num[i]==1)
		{
			primelist[N] = i;
			N++;
		}
	}
}
int main()
{
	prime();
//	for(int i=0;i<N;i++)
//	{
//		printf("%d\n",primelist[i]);
//	}
	int a,jumlah,t;
	scanf("%d",&t);
	for(int j =0;j<t;j++)
	{
		int b[5000],c[5000];
		scanf("%d",&a);
		jumlah = 0;
		for(int i=0;i<N;i++)
		{
			b[jumlah]= primelist[i];
			c[jumlah]= a-b[jumlah];
			if(c[jumlah]<b[jumlah]) break;
			int min = 0, max = N+1,mid;
			while (min<=max)
			{
				mid = (min+max)/2;
				if(primelist[mid]==c[jumlah] && b[jumlah]+c[jumlah]==a)
				{
					jumlah++;
				}
				else if (primelist[mid]>c[jumlah])
				{
					max = mid-1;
				}
				else min = min+1;
			}
		}
		printf("%d has %d representation(s)\n",a,jumlah);
		for(int k=0;k<jumlah;k++)
		{
			printf("%d+%d\n",b[k],c[k]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}