#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,cek,d;
	scanf("%d",&t);
	while (t--)
	{
		int a[120],b[120];
		scanf("%d",&n);
		cek = 1;
		for (int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
		sort(a,a+n);
		d=b[1]-b[0];
		for (int i=2;i<n;i++)
		{
			if(d!=(b[i]-b[i-1]))
			{
				cek = 2;
				break;
			}
		}
		d = a[1]-a[0];
		for (int i=2;i<n;i++)
		{
			if(d!=(a[i]-a[i-1]))
			{
				cek = 0;
				printf("non-arithmetic\n");
				break;
			}
		}
		if (cek==1) printf("arithmetic\n");
		else if(cek==2) printf("permuted arithmetic\n");
	}
	
	
	return 0;
}