#include<stdio.h>

int main()
{
	int n,c,a,temp,ans,cek;
	scanf("%d %d",&n,&c);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(i==0) temp = a;
		else
		{
			cek = temp-a-c;
			if(i==1 || cek>ans) ans = cek;
			temp = a;
		}
	}
	if(ans<=0) ans = 0;
	printf("%d\n",ans);
	return 0;
}