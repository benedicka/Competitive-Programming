#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[100],hasil1[1000000],hasil2[1000000],c1,c2,c=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c1=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			for (int k=0;k<n;k++)
			{
				hasil1[c1]=a[i]*a[j]+a[k];
				c1++;
				
			}
		}
	}
	sort (hasil1,hasil1+c1);
//	for (int i=0;i<c1;i++)
//	{
//		printf("hasil 1 = %ld\n",hasil1[i]);
//	}
	c2=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			for (int k=0;k<n;k++)
			{
				if (a[i]!=0)
				{
					hasil2[c2]=a[i]*(a[j]+a[k]);
					c2++;
				}
			}
		}
	}
	sort (hasil2,hasil2+c2);
//	for (int i=0;i<c2;i++)
//	{
//		printf("hasil 2 = %ld\n",hasil2[i]);
//	}
 int ans,min,mid,max;
	ans = 0;
	for (int i=0;i<c1;i++)
	{
		min = 0;
		max = c2-1;
		c=0;
		while (min<=max)
		{
			mid = (min+max)/2;
			if (hasil2[mid]==hasil1[i])
			{
				ans++;
				c=mid+1;
				while (hasil2[c]==hasil1[i])
				{
					ans++;
					c++;
					if (hasil2[c]!=hasil1[i]) break;
				}
				c = mid-1;
				while (hasil2[c]==hasil1[i])
				{
					ans++;
					c--;
					if (hasil2[c]!=hasil1[i]) break;
				}
				break;
			}
			else if(hasil2[mid]>hasil1[i]) 
			{
				max = mid -1;
				
			}
			else min = mid+1;
		}
	}
	printf("%d",ans);
	return 0;
}