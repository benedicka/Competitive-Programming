#include<stdio.h>
int n,a,cnt,ans,prev;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(cnt==0)
		{
			cnt++;
			prev = a;
		}
		else if(a>=prev)
		{
			cnt++;
			prev  = a;
		}
		else
		{
			if(ans<cnt) ans = cnt;
			cnt = 1;
			prev = a;
		}
	}
	printf("%d\n",cnt>ans?cnt:ans);
	return 0;
}