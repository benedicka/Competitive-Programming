#include<stdio.h>
int main()
{
	int n,m,c = 0,cek;
	scanf("%d %d",&n,&m);
	for(int a=0;a*a<=n;a++)
	{
		cek = n-a*a;
		//printf("cek = %d\n",cek);
		if(a+cek*cek==m) c++;
	}
	printf("%d\n",c);
	
	return 0;
}