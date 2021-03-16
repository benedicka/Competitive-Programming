#include<stdio.h>
int gcd(int a, int b)
{
	if(b==0) return a;
	else gcd(b,a%b);
}


int main()
{

	freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
 long long ans = 1;
	int m,n,x[201],y[201],a,fpb;
		
	scanf("%d %d",&m,&n);

	if(m==n) printf("1\n");
	else if(m>n) printf("0\n");
	else
	{
		//a = n-m;
		for(int i=0;i<m;i++)
		{
			x[i] = n-i;
			//printf("x = %d ",x[i]);
		}
		//printf("\n");
		for(int i=0;i<m;i++)
		{
			y[i] = m-i;
			//printf("y = %d ",y[i]);
		}
		//printf("\n");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(x[i]>1 && y[j]>1)
				{
					fpb = gcd(x[i],y[j]);
					x[i]/=fpb;
					y[j]/=fpb;
				}
			}
		}
//		for(int i =0;i<m;i++)
//		{
//			printf("%lld ",x[i]);
//		}
//		printf("\n");
		for(int i=0;i<m;i++)
		{
			ans*=x[i];
			ans%=1000000007;
			//printf("ans = %lld\n",ans);
		}
		printf("%lld\n",ans);
	}
	
	
	return 0;
}