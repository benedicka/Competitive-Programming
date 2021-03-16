#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,d,x,y,j,ans=0;
	double jarak;
	scanf("%d %d",&d,&r);
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&x,&y,&j);
		jarak = sqrt(x*x+y*y);
		if(jarak-j>=d-r && jarak+j<=d) ans++;
	}
	printf("%d\n",ans);
	return 0;
}