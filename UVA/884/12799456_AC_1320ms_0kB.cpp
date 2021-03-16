#include <stdio.h>
#include <math.h> 
bool num[1001];
int N=1,n=1000;
long primelist[79000];
long ans[1000000];
void sieve()
{
	for(int i=0;i<n;i++)
	{
		num[i] = 1;
	}
	num[0] = 0;
	num[1] = 0;
	for(int i=3;i*i<n;i+=2)
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
	for(int i=3;i<n;i+=2)
	{
		if(num[i]==1)
		{
			primelist[N]=i;
			N++;
		}
	}
}

int main()
{
	int a;
	sieve();
	ans[0] = 0;
	for(int i=1;i<1000000;i++)
	{
		int c=0;
		a = i+1;
		while (a!=1)
		{
			for(int j=0;j<N;j++)
			{
				while (a%primelist[j]==0)
				{
					a/=primelist[j];
					c++;
				}
				if(a==1) break;
				else if(primelist[j]>i+1) break;
			}
			if(a!=1)
			{
				a = 1;
				c++;
			}
		}
			
		
   		ans[i] = ans[i-1]+c;
	}
	int z,b;
	while(scanf("%d",&z)!=EOF)
	{
		printf("%d\n",ans[z-1]);
	}
	
    return 0;
}
