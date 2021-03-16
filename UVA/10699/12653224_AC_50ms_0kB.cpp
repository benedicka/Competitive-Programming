#include <stdio.h>
long long primelist[1000000];
bool num[1000001];
long long N=1;
void prime()
{
	for (int i=0;i<1000001;i++)
	{
		num[i]=1;
	}
	num[0]=0;
	num[1]=0;
	for (int i=3;i*i<1000001;i+=2)
	{
		if (num[i]==1)
		{
			for (int j=i*i;j<1000001;j+=i)
			{
				num[j]=0;
			}
		}
	}
	primelist[0]=2;
	for (int i=3;i<1000001;i+=2)
	{
		if (num[i]==1)
		{
			primelist[N]=i;
			N++;
		}
	}
}
int main()
{
		int a,c;

	prime();
	do
	{
			c=0;
		scanf("%d",&a);
		if(a==0) break;
		for (int i=0;i<N;i++)
		{
			if(a%primelist[i]==0)c++;
			if (a<primelist[i]) break;
		}
		printf ("%d : %d\n",a,c);
		
	}while (a!=0);
	
	
	
	
	return 0;
}






