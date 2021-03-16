#include<bits/stdc++.h>
using namespace std;
int prime[100010],cnt=0;
void sieve()
{
	bool num[100010];
	int mx = 100000;
	memset(num,1,sizeof(num));
	num[0] = num[1] = 0;
	for(int i=3;i*i<=mx;i+=2)
	{
		if(num[i])
		{
			for(int j=i*i;j<=mx;j+=i)
			{
				num[j] = 0;
			}
		}
	}
	prime[0] = 2;
	cnt++;
	for(int i=3;i<=mx;i+=2)
	{
		if(num[i]) prime[cnt++] = i;
	}
}
int main()
{
	sieve();
//	printf("cnt = %d\n",cnt);
	int t,x,pangkat;
	bool cetak=0;
	while(scanf("%d",&x)!=EOF)
	{
		if(cetak) printf("\n");
		cetak = 0;
		if(x<0)
		{
			x*=-1;
			cetak = 1;
			printf("-1");
		}
		for(int i=0;i<cnt;i++)
		{
			pangkat = 0;
			if(prime[i]*prime[i]>x) break;
			while(x%prime[i]==0)
			{
				pangkat++;
				x/=prime[i];
			}
			if(pangkat>=1)
			{
				if(cetak) printf(" ");
				printf("%d",prime[i]);
				cetak = 1;
			} 
			if(pangkat>1) printf("^%d",pangkat);
		}
		if(x!=1)
		{
			if(cetak) printf(" ");
			cetak = 1;
			printf("%d",x);
		}
	}
	return 0;
}