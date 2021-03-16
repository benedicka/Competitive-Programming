#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
long long n,a[100010],x[3] = {-1,0,1},cnt,ans,cek;
bool z;
void ok()
{
	long long b;
	b = a[1]-a[0];
	cek = a[1]+b;
	for(int i=2;i<n;i++)
	{
		if(abs(cek-a[i])>1) 
		{
			return ;
		}
		else if(cek!=a[i])cnt++;
		//printf("%lld ",cek);
		cek+=b;
	}
	z= 1;
//	printf("\n");
	ans = min(ans,cnt);
//	printf("%lld\n",ans);
}
int main()
{
	z = 0;
	scanf("%lld",&n);
	ans = n+1;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	if(n<=2) printf("0\n");
	else
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				a[0]+=x[i];
				a[1]+=x[j];
				//printf("%lld %lld ",a[0],a[1]);
				if(i!=1 && j!=1) cnt = 2;
				else if(i!=1 || j!=1) cnt = 1;
				else cnt= 0;
				ok();
				a[0]-=x[i];
				a[1]-=x[j];
			}
		}
		//printf("%lld %lld\n",ans,n+1);
		if(ans==n+1) printf("-1\n");
		else printf("%lld\n",ans);
	}
	return 0;
}