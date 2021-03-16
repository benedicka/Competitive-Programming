#include<stdio.h>
#include<stdlib.h>
long long n,c,x,ans;
void f(int idx , int jum4, int jum7,long long x)
{

	if(idx==c)
	{
		//printf("%lld ans=%lld x=%lld\n",x,ans-n,x-n);
		if(((x>=n && ans==0)|| (x-n<ans-n && x>=n)) && jum4==jum7) ans = x;
		return;
	}
	f(idx+1,jum4+1,jum7,x*10+4);
	f(idx+1,jum4,jum7+1,x*10+7);
	
	return;
}
int main()
{
	scanf("%lld",&n);
	x = n;
	//printf("n = %lld\n",n);
	while(x>0)
	{
		x/=10;
		c++;
	}
	if(c%2!=0) c+=1;
	if(c==2 && 74<n) c+=2;
	else if(c==4 && 7744<n)c+=2;
	else if(c==6 && 777444<n)c+=2;
	else if(c==8 && 77774444<n)c+=2;
	else if(c==10 && 7777744444<n)c+=2;
	f(0,0,0,0);
	printf("%lld\n",ans);
	return 0;
}