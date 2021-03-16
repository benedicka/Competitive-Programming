#include<stdio.h>
#include<math.h>
int primelist[1000000];
bool num[1000001];
int N=1;
void prime()
{
	for (int i=0;i<200000;i++)
	{
		num[i]=1;
	}
	num[0]=0;
	num[1]=0;
	for (int i=3;i*i<200000;i+=2)
	{
		if (num[i]==1)
		{
			for (int j=i*i;j<200000;j+=i)
			{
				num[j]=0;
			}
		}
	}
	primelist[0]=2;
	for (int i=3;i<200000;i+=2)
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
	int t,l,u,ans[100000],c,index=0;
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
		c=0;
		scanf("%d %d",&l,&u);
		int range=u-l+1;
		for (int j=0;j<range;j++)
		{
			ans[j]=l+j;
		}
		for (int j=0;j<N;j++)
		{
			if (primelist[j]>u) break;
			for (int z=0;z*z<range;z++)
			{
				if (ans[z]!=0)
				{
					if (ans[z]==primelist[j] && ans[z]!=0)
					{
						for (int k=z+primelist[j];k<range;k+=primelist[j])
						{
							ans[k]=0;
						}
						break;
					}	
					else if(ans[z]%primelist[j]==0 && ans[z]!=0)
					{
						for (int k=z;k<range;k+=primelist[j])
						{
							ans[k]=0;
						}
						break;
					}
					else 
					{
						long start;
						if (primelist[j]>l)start=((l/primelist[j])*primelist[j])+primelist[j]+primelist[j];	
						else start=((l/primelist[j])*primelist[j])+primelist[j];	
						start=start-l;
						for (int k=start;k<range;k+=primelist[j])
						{
							ans[k]=0;
						}
						break;
					}				
				}
			}
		}
		for (int j=0;j<range;j++)
		{
			if (ans[j]!=1 && ans[j]!=0) printf("%d\n",ans[j]);	
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}