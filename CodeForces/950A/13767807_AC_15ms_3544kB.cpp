#include<stdio.h>
#include<math.h>

int main()
{
	int l,r,a,ans;
	scanf("%d %d %d",&l,&r,&a);
	ans = 0;
	if(l<r)
	{
		while(l<r && a!=0)
		{
			l++;
			a--;
		}
	}
	else if(r<l)
	{
		while(r<l && a!=0)
		{
			r++;
			a--;
		}
	}
	ans= (l<r?2*l:2*r)+a;
	if(ans%2!=0) ans-=1;
	printf("%d\n",ans);
	return 0;
}