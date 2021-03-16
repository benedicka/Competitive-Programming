#include<stdio.h>
long long n,q,a[200010],k[200010],input,min,mid,max,awal,akhir;
int main()
{
	scanf("%lld %lld",&n,&q);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&input);
		i==0?a[i] = input :  a[i] = a[i-1]+input;
	}
	for(int i=0;i<q;i++)
	{
		scanf("%lld",&input);
		i==0?k[i] = input : (input+k[i-1]>=a[n-1]? k[i] = 0 : k[i] = k[i-1]+input);
		if(i==0 && k[i]>=a[n-1]) k[i] = 0;
	}
//	printf("\n");
//	for(int i=0;i<n;i++)
//	{
//		printf("%lld ",a[i]);
//	}
//	printf("\n\n");

	for(int i=0;i<q;i++)
	{
		min = 0;
		max = n;
		while(min<=max)
		{
			
			mid = (min+max)/2;
			//printf("%lld %lld %lld\n",min,mid,max);
			if(k[i]==0 || k[i]<a[0])
			{
				printf("%lld\n",n);
				break;
			}
			if((mid>0 && a[mid-1]<=k[i] && a[mid]>=k[i]) || a[mid]==k[i] || (mid+1<n && a[mid+1]==k[i] && a[mid]<k[i]))
			{
			//	printf("%lld ",mid);
				if((mid>0 && a[mid-1]<=k[i]) && a[mid]>k[i]) mid-=1;
				if(mid+1<n && a[mid+1]==k[i] && a[mid]<k[i]) mid+=1;
				if(mid+1<n)mid+=1;
			//	printf("a[%lld] = %lld\n",mid,a[mid]);
				printf("%lld\n",n-mid);
				break;
			}
			else if(a[mid]<k[i])
			{
				min = mid+1;
			}
			else
			{
				max = mid-1;
			}
		}
	}
	return 0;
}