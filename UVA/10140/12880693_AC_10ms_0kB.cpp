#include<stdio.h>
#include<math.h>
int primelist[1000000];
bool num[1000001];

	int t,l,u,ans[1000010],c,index=0,p[1000010],z=0;
int N=1;
void prime()
{
	for (int i=0;i<1000000;i++)
	{
		num[i]=1;
	}
	num[0]=0;
	num[1]=0;
	for (int i=3;i*i<1000000;i+=2)
	{
		if (num[i]==1)
		{
			for (int j=i*i;j<1000000;j+=i)
			{
				num[j]=0;
			}
		}
	}
	primelist[0]=2;
	for (int i=3;i<1000000;i+=2)
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
	prime();


		c=0;
		while (scanf("%d %d",&l,&u)!=EOF)
		{
			int range=u-l+1;
			
		for (int j=0;j<range;j++)
		{
			ans[j]=l+j;
		}
		for (int j=0;j<N;j++)
		{
			if (primelist[j]>u) break;
			for (int z=0;z<range;z++)
			{
				if (ans[z]!=0)
				{
					
					
						long start;
						if (l%primelist[j]==0)start=((l/primelist[j])*primelist[j]);	
						else start=((l/primelist[j])*primelist[j])+primelist[j];	
						start=start-l;
						for (int k=start;k<range;k+=primelist[j])
						{
							if(ans[k]!=primelist[j])ans[k]=0;
						}
						break;
								
				}
			}
		}
		z=0;
		for (int j=0;j<range;j++)
		{
			if (ans[j]>1) 
			{
				p[z] = ans[j];
				z++;
			}
		}
		int m1=0,m2=0,x1=0,x2=0,distmin=100000000,distmax=0;
		for(int i=1;i<z;i++)
		{
			if(p[i]-p[i-1]>distmax && p[i-1]!=1)
			{
				x1 = p[i];
				x2 = p[i-1];
				distmax = p[i]-p[i-1];
			}
			if(p[i]-p[i-1]<distmin && p[i-1]!=1)
			{
				m1 = p[i];
				m2 = p[i-1];
				distmin = p[i]-p[i-1];
			}
		}
		if(z<2) printf("There are no adjacent primes.\n");
		else printf("%d,%d are closest, %d,%d are most distant.\n",m2,m1,x2,x1);
}
		
	
	
	
	
	
	return 0;
}