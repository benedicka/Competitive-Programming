#include <stdio.h>



int main()
{
	long long a,b,c;
	long long ans;
	int x[10000];
	do
	{
		scanf("%lld %lld",&a,&b);
		if (a==0 && b==0) break;
		ans=1;
		c=0;
		if (a==b) printf("1\n");
		else if (b==1) printf("%d\n",a);
		else 
		{
			if (a-b>b)
			{
				for (int i=0;i<b;i++)
				{
					if (b-i==0) break;
					x[i]=b-i;
					c++;
				}
				for (int i=a;i>(a-b);i--)
				{
					ans=ans*i;;
					for (int i=0;i<c;i++)
					{
						if (ans%x[i]==0 && x[i]>1)
						{
							ans=ans/x[i];
						
							x[i]=1;
						}
					}
				}
				printf("%lld\n",ans);
			}
			else 
			{
				for (int i=0;i<b;i++)
				{
					if (b-i<=0) break;
					x[i]=a-b-i;
					if (x[i]==0) break;
					c++;
				}
				for (int i=a;i>b;i--)
				{
					ans=ans*i;
					for (int i=0;i<c;i++)
					{
						if (ans%x[i]==0 && x[i]>1)
						{
							ans=ans/x[i];
							x[i]=1;
						}
					}
				}
				printf("%lld\n",ans);





			}




		}




	}while (a!=0 || b!=0);



	return 0;
}