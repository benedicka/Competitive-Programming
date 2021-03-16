#include<stdio.h>
#include<math.h>
int n=100000,N=1;
bool num[100000];
int primelist[9510];
int prime()
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
			for(int j=i*i;j<n;j+=i)
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
			primelist[N] = i;
			N++;
		}
	}
	
}
int main()
{
	prime();
	long long a,c;

	while(scanf("%lld",&a)!=EOF)
	{
		if(a==0) break;
		c = 0;
	//	printf("a = %lld\n",a);
		printf("%lld =",a);
		if(a<0)
		{
			printf(" -1");
			a*=-1;
			c = 1;
		}
		//printf("%d\n",a);
		for(int i=0;i<N;i++)
		{
			while (a%primelist[i]==0)
			{
				a/=primelist[i];
				if(c==0)
				{
					c=1;
					printf(" %d",primelist[i]);
				}
				else
				{
					printf(" x %d",primelist[i]);
				}
				
			}
			if(a==1 || a<primelist[i]) break;
		}
		if(a!=1 && c==1) printf(" x %lld",a);
		else if(a!=1)printf(" %lld",a);
		printf("\n");
	}
	
	return 0;
}