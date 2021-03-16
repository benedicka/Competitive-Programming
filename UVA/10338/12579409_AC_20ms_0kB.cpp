#include <stdio.h>
#include <string.h>




int main()
{
	int t,wordlength,c;
	char x[21];
	long long ans;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%s",&x);
		ans=1;
		wordlength=strlen(x);
		for (int i=2;i<=wordlength;i++)
		{
			ans=ans*i;
		}
		for (int i=0;i<wordlength;i++)
		{
			for (int j=i+1;j<wordlength;j++)
			{
				if (x[i]>x[j])
				{
					char swap;
					swap=x[i];
					x[i]=x[j];
					x[j]=swap;
				}
			}
		}
		c=1;
		for (int i=0;i<wordlength;i++)
		{
			if (x[i]==x[i+1])
			{
				c++;
			}
			if (x[i] !=x[i+1])
			{
				for (int i=1;i<=c;i++)
				{
					ans=ans/i;
				}
				c=1;
			}

		}
		printf("Data set %d: %lld\n",i+1,ans);
		
	}

	

	return 0;
}