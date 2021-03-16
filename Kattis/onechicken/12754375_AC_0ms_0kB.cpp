#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,ans;
	scanf("%d %d",&a,&b);
	ans =abs(a-b);
	if(b>a) printf("Dr. Chaz will have %d piece%s of chicken left over!",ans,ans==1?"":"s");
	else if (a>b) printf("Dr. Chaz needs %d more piece%s of chicken!",ans,ans==1?"":"s");
	return 0;
}