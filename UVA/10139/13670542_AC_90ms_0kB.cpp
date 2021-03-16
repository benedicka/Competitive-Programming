#include<stdio.h>
int primelist[100000],jum=0,x=100000,z;
bool num[100000];
void prime()
{
	for(int i=0;i<x;i++)
	{
		num[i] =1;
	}
	num[0] = 0;
	num[1] = 0;
	for(int i=3;i<x;i+=2)
	{
		if(num[i]==1)
		{
			for(int j=i+i;j<=x;j+=i)
			{
				num[j] = 0;
			}
		}
	}
	primelist[0] = 2;
	jum = 1;
	for(int i=3;i<x;i+=2)
	{
		if(num[i]==1)
		{
			primelist[jum] = i;
			jum++;
		}
	}
}
int banyak(int x,int a)
{
	int r = 0;
	for(int i=a;i<=x;i*=a)
	{
		r += x/i;
	}
	return r;
}
int main()
{
	int n,m,temp,cek,a,b;
	bool ok;
	prime();
//	for(int i=0;i<jum;i++)
//	{
//		printf("%d\n",primelist[i]);
//	}
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		ok = 1;
		z = m;
		if(n==0 && m==1) printf("%d divides %d!\n",z,n);
		else if(m<=n) printf("%d divides %d!\n",z,n);
		else
		{
			for(int i=0;i<jum;i++)
			{
				if(ok==0) break;
				temp = 0;
				a = 0;
				b = 0;
				cek = 0;
				if(m%primelist[i]==0 && m!=1)
				{
					while(m%primelist[i]==0 && m!=1)
					{
						m/=primelist[i];
						temp++;
					}
					cek = banyak(n,primelist[i]);
					if(temp>cek)
					{
					
						ok = 0;
						break;
					}
					if(m==1) break;
				}
			}
			if(m!=1)
			{
				if(m>n) ok = 0;
				
			}
			if(ok==1) printf("%d divides %d!\n",z,n);
			else printf("%d does not divide %d!\n",z,n);
		}
		
	}
	
	return 0;
}