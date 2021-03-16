#include <stdio.h>
#define ff fflush(stdin)
long primelist[10001];
long onlyprime[12230];
int n=0;

void listprime()
{
	for (int i=0;i<=10000;i++)
	{
		primelist[i]=1;
	}
	primelist[0]=0;
	primelist[1]=0;
	for (int i=2;i<=10000;i++)
	{
		if (primelist[i]==1)
		{
			for (int j=i+i;j<=10000;j+=i)
			{
				primelist[j]=0;
			}
		}
	}
	for (int i=0;i<=10000;i++)
	{
		if (primelist[i]==1) 
		{
				onlyprime[n]=i;
				n++;
		}
	}

}


int main()
{
	listprime();
	int t;
	int a,b,c,cnt,d;
	scanf("%d",&t);ff;
	for (int i=0;i<t;i++)
	{
		c=0;
		cnt=0;
		d=0;
		scanf("%d %d",&a,&b);ff;
		if (a>b)
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
		if (a<2) a=2;
		for (int i=a;i<=b;i++)
		{
			for (int j=1;j*j<=i;j++)
			{
				if (i%j==0)
				{
					cnt+=2;
					if (i/j==j) cnt--;
				}
			}
			for (int k=0;k<n;k++)
			{
				if (cnt==onlyprime[k])
				{
					if (d>0) printf(" ");
					d=1;
					c=1;
					cnt=0;
					printf("%d",i);
					
	
					break;
				}
				if (cnt<onlyprime[k])
				{
						cnt=0;
						break;
				}
			}
		}
		if (c==0) printf("-1");
	printf("\n");
	}




	getchar();
	return 0;
}