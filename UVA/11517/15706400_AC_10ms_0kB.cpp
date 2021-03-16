#include<stdio.h>
#include<algorithm>
using namespace std;
int t,p,n,c[110],ans,jum,cek[10010];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&p);
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&c[i]);
		}
		for(int i=0;i<=10000;i++)
		{	
			if(i==0) cek[i] =0;
			else cek[i] = 10000;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=10000;j>=0;j--)
			{
				if(j+c[i]<=10000 && cek[j]+1<cek[j+c[i]])
				{
					//printf("%d %d ",j,c[i]);
					cek[j+c[i]] = cek[j]+1;
					//printf("cek[%d] = %d\n",j+c[i],cek[j+c[i]]);
				}
			}
		}
		for(int i=p;i<=10000;i++)
		{
			if(cek[i]!=10000)
			{
				printf("%d %d\n",i,cek[i]);
				break;
			}
		}
	}
	return 0;
}