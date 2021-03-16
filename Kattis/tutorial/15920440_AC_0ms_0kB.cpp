#include<stdio.h>
#include<math.h>
int m,n,k;
double cek;
int main()
{
	scanf("%d %d %d",&m,&n,&k);
	if(k==1)
	{
		cek = 1;
		while(n)
		{
			cek*=n;
			if(cek>m) break;
			n-=1;
		}
	}
	else if(k==2)
	{
		cek = 1;
		while(n)
		{
			cek*=2;
			if(cek>m) break;
			n-=1;
		}
	}
	else if(k==3)
	{
		cek = 1;
		for(int i=1;i<=4;i++)
		{
			cek*=n;
			if(cek>m) break;
		}
	}
	else if(k==4)
	{
		cek = 1;
		for(int i=1;i<=3;i++)
		{
			cek*=n;
			if(cek>m) break;
		}
	}
	else if(k==5)
	{
		cek = 1;
		for(int i=1;i<=2;i++)
		{
			cek*=n;
			if(cek>m) break;
		}
	}
	else if(k==6)
	{
		cek = (double)n*(log((double)n)/log(2.0));
	}
	else
	{
		cek = n;
	}
	if(cek<=(double)m) printf("AC\n");
	else printf("TLE\n");
	return 0;
}