#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d=65;
	scanf("%d",&a);
	a = pow(2,a)-1;
	for(int i=1;i<=a;i++)
	{
		d = log(i&-i)/log(2);
		printf("%c",65+d);
	}
	
	
	
	
	return 0;
}