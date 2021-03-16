#include<stdio.h>
bool c1,c2;
int main()
{
	c1 = c2 = 1;
	int s,f;
	int n,p,k;
	scanf("%d %d %d",&n,&p,&k);
	if(p-k<=1) c1 = 0;
	if(p+k>=n) c2 = 0;
	s = p-k;
	if(s<1) s = 1;
	f = p+k;
	if(f>n) f = n;
	if(c1) printf("<< ");
	for(int i=s;i<=f;i++)
	{
		if(i==p) printf("(");
		printf("%d",i);
		if(i==p) printf(")");
		if(i!=f) printf(" ");
	}
	if(c2) printf(" >>\n");
	return 0;
}