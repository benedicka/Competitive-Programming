#include<stdio.h>
int main()
{
	int n,m;	
	int min,max,mid;
	int a[1000000],cut;
	scanf("%d %d",&n,&m);
	max = 1;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]>max) max=a[i];
	}
min = 0;
while (max-min>1)
	{
		mid=(min+max)/2;
		cut=0;
		for (int i=n;i>=0;i--)
		{
			if(a[i]>mid) cut+=(a[i]-mid);
			if(cut>m) break;
		}
		if(cut>=m) min=mid;
		else max=mid;
	}	
	printf("%d\n",(max+min)/2);
	return 0;
}