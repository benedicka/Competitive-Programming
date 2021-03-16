#include<stdio.h>
long long a[500001],b[500001],t,ans;
void combine(int min,int mid,int max)
{
	int i = min;
	int j = mid+1;
	int posisi = min;
	//printf("min = %d mid = %d max = %d ans = %d\n",min,mid,max,ans);
	while(i<=mid && j<=max)
	{
		if(a[i]>a[j])
		{
			b[posisi] = a[j];
			j++;
			posisi++;
			ans+=mid - i+1;
			
		}
		else
		{
			b[posisi] = a[i];
			i++;
			posisi++;
		}
	}
	while(i<=mid)
	{
		b[posisi] = a[i];
		posisi++;
		i++;
	}
	while(j<=max)
	{
		b[posisi] = a[j];
		posisi++;
		j++;
	}
	for(i=min;i<=max;i++)
	{
		a[i] = b[i];
	}
//	for(int i=0;i<t;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
}
void sort(int x,int y)
{
	if(x==y) return;
	else
	{
		int mid = (x+y)/2;
		sort(x,mid);
		sort(mid+1,y);
		combine(x,mid,y);
	}
}
int main()
{
	while(scanf("%lld",&t)!=EOF)
	{
		ans = 0;
		if(t==0) break;
		for(int i=0;i<t;i++)
		{
			scanf("%lld",&a[i]);
			b[i] = 0;
		}
		sort(0,t-1);
		if(ans%2!=0) printf("Marcelo\n");
		else printf("Carlos\n");
		//printf("%lld\n",ans);
	}
	
	
	
	return 0;
}