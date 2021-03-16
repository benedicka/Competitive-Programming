#include<stdio.h>


int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2!=0) printf("First Box\n");
		else
		{
			int cek = 0;
			while(n%2==0)
			{
				n/=2;
				cek++;
			}
			if(cek%2==0) printf("First Box\n");
			else printf("Second Box\n");
		}
	}
	
	return 0;
}