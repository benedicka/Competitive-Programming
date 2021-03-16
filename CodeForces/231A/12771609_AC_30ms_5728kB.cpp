#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	int n,a[1001][1001],cek,ans=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int j=0;j<n;j++)
	{
			cek = 0;
			cek = a[j][0]+a[j][1]+a[j][2];
			if(cek>=2) ans++;
	}
	printf("%d",ans);
	
	
	
	return 0;
}