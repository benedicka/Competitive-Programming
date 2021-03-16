#include<stdio.h>
#include<algorithm>
using namespace std;
bool  num[1000001];
int primelist[1000001],n = 1000001,N =1;


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
	int a,b,c,cek,jumlah;
	while(scanf("%d",&a)!=EOF)
	{
		if(a==0) break;
		cek = a;
		for(int i=0;i<N;i++)
		{
			b = primelist[i];
			c = a-b;
			int min = 0, max = N+1,mid;
			while (min<=max)
			{
				mid = (min+max)/2;
				if(primelist[mid]==c)
				{
					cek = 0;
					break;
				}
				else if (primelist[mid]>c)
				{
					max = mid-1;
				}
				else min = min+1;
			}
			if(cek==0) break;
		}
		printf("%d = %d + %d\n",a,b,c);
	}
	
	
	
	
	return 0;
}