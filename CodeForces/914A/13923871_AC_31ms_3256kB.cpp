#include<stdio.h>
#include<math.h>
bool ok(int x)
{
	int y;
	y = sqrt(x);
	if(x==y*y) return 0;
	else return 1;
}
int main()
{
	int n, x,max;
	scanf("%d",&n);
	max = 10000000;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(max ==10000000 && ok(x) || ok(x) && x>max) max = x;
	}
	printf("%d\n",max);	
	return 0;
}