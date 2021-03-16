#include<stdio.h>
#include<string.h>
int x[16],sum,t,z,tmp;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		sum = 0;
		z = 0;
		for(int i=0;i<16;i++)
		{
			scanf("%1d",&x[i]);
			if(i%2==0)
			{
				tmp = 2*x[i];
				sum+=tmp%10;
				tmp/=10;
				sum+=tmp%10;
			}
			else z+=x[i];
		}
		sum+=z;
		//printf("sum = %d\n",sum);
		if(sum%10==0) printf("Valid\n");
		else printf("Invalid\n");
	}
	return 0;
}