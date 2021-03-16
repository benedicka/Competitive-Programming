#include<bits/stdc++.h>
using namespace std;
int n,m,len,tmp,sisa1,jum01,jum011;

int main()
{
	scanf("%d %d",&n,&m);
	if (n>m+1 || m>2*(n+1)) printf("-1");
	else
	{
		if(n==m)
		{
			for(int i=0;i<n;i++)
			{
				printf("01");
			}
		}
		else if(n>m)
		{
			for(int i=0;i<m;i++)
			{
				printf("01");
			}
			printf("0");
		}
		else
		{
			sisa1 = m-n;
			jum01 = n;
		//	printf("jum01 : %d sisa = %d jum011 = %d\n",jum01,sisa1,jum011);
			jum011+=min(sisa1,jum01);
			jum01-=min(sisa1,jum01);
			sisa1-=jum011;
		//	printf("jum01 : %d sisa = %d jum011 = %d\n",jum01,sisa1,jum011);
			for(int i=0;i<sisa1;i++)
			{
				printf("1");
			}
			for(int i=0;i<jum01;i++)
			{
				printf("01");
			}
			for(int i=0;i<jum011;i++)
			{
				printf("011");
			}
			printf("\n");
		}
	}
	return 0;
}