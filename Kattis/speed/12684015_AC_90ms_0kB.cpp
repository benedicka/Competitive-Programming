#include<stdio.h>
int main()
{
	long n;
	double t,d[1000],v[1000],min,max,mid,cek;
	scanf("%ld %lf",&n,&t);
	for (int i=0;i<n;i++)
	{
		scanf("%lf %lf",&d[i],&v[i]);
		if (i==0) min=v[i];
		else
		{
			if(min>v[i]) min=v[i];
		}
	}
	max=100000000;
	min*=-1;
	for (int j=0;j<10000;j++)
	{
		cek=0;
		mid = (max+min)/2;
	
		
		for (int i=0;i<n;i++)
		{
			cek+=((d[i])/(mid+v[i]));
		}
		if	(cek>t) min=mid;
		else max=mid;
	}
	printf("%.9lf\n",mid);
	
	
	
	
	
	
	

	return 0;
}