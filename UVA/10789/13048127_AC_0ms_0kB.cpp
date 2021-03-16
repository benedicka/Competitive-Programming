#include<bits/stdc++.h>
using namespace std;
bool num[2020];
int n,length,c,cek;
char x[2002];
bool ok = 0;
int primelist[2000],jum = 1;
void prime()
{
	for(int i=1;i<=2020;i++)
	{
		num[i] = 1;
	}
	num[1] = 0;
	num[0] = 0;
	for(int i=3;i*i<=2020;i+=2)
	{
		for(int j=i+i;j<=2020;j+=i)
		{
			num[j] = 0;
		}
	}
	primelist[0] = 2;
	for(int i=3;i<=2020;i+=2)
	{
		if(num[i]==1)
		{
			primelist[jum] = i;
			jum++;
		}
	}
}
void isprime(int z)
{
	for(int i=0;i<jum;i++)
	{
		if(c==primelist[i])
		{
			ok = 1;
			printf("%c",x[z-1]);
			break;
		}
		else if(primelist[i]>c) break;
	}
	return;
}


int main()
{
	prime();

	scanf("%d",&n);
	char cek;
	for(int i=0;i<n;i++)
	{
		c = 1;
		ok=0;
		scanf("%s",&x);
		length = strlen(x);
		sort(x,x+length);
		printf("Case %d: ",i+1);
		for(int i=0;i<length;i++)
		{
			if(i==0)
			{
				cek = x[i];
				c=1;
			}
			else if(x[i]!=cek || i==length-1)
			{
				if(i==length-1) c++;
				//printf("%d\n",c);
				isprime(i);
				c= 1;
				cek = x[i];
			}
			else c++;
		}
		if(ok==0) printf("empty");
		printf("\n");
	}
	
	
	return 0;
}
