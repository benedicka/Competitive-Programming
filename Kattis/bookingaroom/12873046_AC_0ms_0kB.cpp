#include<stdio.h>
int main()
{
	int r[101],n,a,cek,z;
	scanf("%d %d",&a,&n);
	for(int i=0;i<100;i++)
	{
		r[i] = 0;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&cek);
		r[cek-1] = 1;

	}
	z = 1;

	for(int i=0;i<a;i++)
	{
		if(r[i]==0)
		{
			printf("%d\n",i+1);
			z = 0;
			break;
		}
	}
	if(z==1) printf("too late");	
	
	
	return 0;
}