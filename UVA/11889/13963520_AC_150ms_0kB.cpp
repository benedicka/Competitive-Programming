#include<stdio.h>
#include<math.h>
bool prime[10000010];
int primelist[10000010],c=0,ca,cb;
int t,a,b,ans;
void sieve()
{
	for(int i=1;i<=10000000;i++)
	{
		prime[i] = 1;
	}
	prime[1] = 0;
	for(int i=2;i*i<=10000000;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=10000000;j+=i)
			{
				prime[j] = 0;
			}
		}	
	}
	for(int i=1;i<=10000000;i++)
	{
		if(prime[i])
		{
			primelist[c] = i;
			c++;
		}
	}
}
int main()
{
	sieve();
	//printf("%d\n",c);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		if(b%a!=0) printf("NO SOLUTION\n");
		else
		{
			ans = 1;
			for(int i=0;i<c;i++)
			{
				//printf("a = %d b = %d = ans = %d\n",a,b,ans);
				if(a==1 || primelist[i]*primelist[i]>=b) break;
				if(a%primelist[i]!=0 && b%primelist[i]==0)
				{
					cb = 1;
					while(b%primelist[i]==0)
					{
						b/=primelist[i];
						cb*=primelist[i];
						
					}
					ans*=cb;
				}
				else if(a%primelist[i]==0 && b%primelist[i]==0)
				{
					cb = 1;
					ca = 1;
					while(b%primelist[i]==0)
					{
						b/=primelist[i];
						cb*=primelist[i];
					}
					while(a%primelist[i]==0)
					{
						a/=primelist[i];
						ca*=primelist[i];
					}
					if(cb>ca)ans*=cb;
				}
			}
			if(a!=b)ans*=b;
			printf("%d\n",ans);
		}
	
	}
	
	return 0;
}