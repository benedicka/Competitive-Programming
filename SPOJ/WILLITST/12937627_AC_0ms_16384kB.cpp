#include<stdio.h>
long long cek[100];
bool find;
int main()
{
	cek[0] = 2;
	for(int i=1;i<63;i++)
	{
		cek[i] = cek[i-1]*2;
	}
	long long n;
	while(scanf("%lld",&n)!=EOF)
	{
		find = 0;
		for(int i=0;i<63;i++)
		{
			if(cek[i]==n)
			{
				find =1;
				break;
			}
		}
	
		if(find==0) printf("NIE\n");
		else printf("TAK\n");
	}
	
	return 0;
}