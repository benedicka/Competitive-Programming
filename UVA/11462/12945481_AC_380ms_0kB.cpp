#include<stdio.h>
int a[2000001],b[2000001],t;
void combine(int l,int m1,int m2, int r)
{
	int l1 = l;
	int r1 = r;
	for(int i=l;i<=r;i++)
	{
		if(l>m1)
		{
			b[i] = a[m2];
			m2++;
		}
		else if(m2>r)
		{
			b[i] = a[l];
			l++;
		}
		else if(a[l]<a[m2])
		{
			b[i] = a[l];
			l++;
		}
		else 
		{
			b[i] = a[m2];
			m2++;
		}
	}
	for(int i=l1;i<=r1;i++)
	{
		a[i] = b[i];
	}
}



void sort(int x,int y)
{
	if(x==y) return;
	else
	{
		int mid = (x+y)/2;
		sort(x,mid);
		sort(mid+1,y);
		combine(x,mid,mid+1,y);
	}
}
int main()
{
	while(scanf("%d",&t)!=EOF)
	{
		if(t==0) break;
		for(int i=0;i<t;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(0,t-1);
		for(int i=0;i<t;i++)
		{
			printf("%d",a[i]);
			if(i<t-1) printf(" ");
			else printf("\n");
		}
	}
	
	
	
	return 0;
}