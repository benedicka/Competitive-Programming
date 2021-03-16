#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
using namespace std;
int cd,cm,cy,bd,bm,by,t,ans;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%d/%d/%d",&cd,&cm,&cy);
		scanf("%d/%d/%d",&bd,&bm,&by);
		ans = cy-by;
		if(cm<bm) ans--;
		else if(cm==bm && cd<bd) ans--;
		printf("Case #%d: ",tc);
		if(ans<0) printf("Invalid birth date\n");
		else if(ans>130) printf("Check birth date\n");
		else printf("%d\n",ans);
	}
	return 0;
}