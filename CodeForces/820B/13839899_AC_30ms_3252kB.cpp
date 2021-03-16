#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,ans=3;
	double a,sudut,min,c,x,y;
	scanf("%d %lf",&n,&a);
	for(int i=2;i<n;i++)
	{
		sudut = (((n*1.0-i*1.0))*180.0)/(n*1.0);
		if(sudut>a)
		{
			x = sudut;
			y = a;
		}
		else
		{
			x = a;
			y = sudut;
		}
		if(i==2 || min>(x-y))
		{
			min = x-y;
			ans = i+1;
		}
	}	
	printf("1 2 %d\n",ans);
	return 0;
}