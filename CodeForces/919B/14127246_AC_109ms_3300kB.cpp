#include<stdio.h>
int ans[12000],mx = 11000000,c=1,x;
bool cek(int n)
{
	int cnt=0;
	while(n!=0)
	{
		cnt+=(n%10);
		if(cnt>10) return 0;
		n/=10;
	}
	if(cnt==10) return 1;
	else return 0;
}
int main()
{
	for(int i=19;i<=mx;i++)
	{
		if(cek(i))
		{
			ans[c] = i;
			c++;
		}
	}
	scanf("%d",&x);
	printf("%d",ans[x]);
	return 0;
}