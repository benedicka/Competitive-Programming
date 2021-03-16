#include<stdio.h>
int n,k,w,c,sum;
int main()
{
	scanf("%d %d %d",&n,&k,&w);
	while(c<w)
	{
		c+=1;
		sum+=(c*n);
	}
	if(sum<=k) printf("0\n");
	else printf("%d\n",sum-k);
	return 0;
}