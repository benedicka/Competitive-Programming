#include<stdio.h>
int main()
{
	int t;
	long long a,b,k,c,n,s;
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
		scanf("%lld %lld %lld",&a,&b,&k);
		if (a<=k) c=k;
		else 
		{
			if (a%k==0) c=a;
			else c=a+k-a%k;
		}
		n=0;
		s=0;
		for (int i=c;i<=b;i+=k)
		{
			for (int j=1;j*j<=i;j++)
			{
				if (i%j==0)
				{
					n+=2;
					s=s+j+(i/j);
					if (j*j==i)
					{
						n--;
						s=s-j;
					}
				}
			}
		}
		printf("%lld %lld\n",n,s);
	}
	return 0;
}