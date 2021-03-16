#include<stdio.h>
	int prime[1000001];
	int onlyprime[1000001];

		int m=0;
void listprime ()
{

	int N=1000000;
	for (int i=0;i<N;i++)
	{
		prime [i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	for (int i=2;i*i<=N;i++)
	{
		if (prime[i]==1)
		{
			for (int j=i+i;j<=N;j+=i)
			{
				prime[j]=0;
			}
		}
	}
	for (int i=0;i<=N;i++)
	{
		if (prime[i]==1)
		{
			onlyprime[m]=i;
			m++;
		}
	}
	
	
	
	
}

int main()
{
	int a,c;

	listprime();
	do
	{
			c=0;
		scanf("%d",&a);
		if(a==0) break;
		for (int i=0;i<m;i++)
		{
			if(a%onlyprime[i]==0)c++;
			if (a<onlyprime[i]) break;
		}
		printf ("%d : %d\n",a,c);
		
	}while (a!=0);
	
	
	
	
	return 0;
}