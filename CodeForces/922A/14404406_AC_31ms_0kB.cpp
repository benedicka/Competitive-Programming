#include<map>
#include<stdio.h>
using namespace std;
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x==0 && y==1) printf("Yes\n");
	else if(y==0) printf("No\n");
	else if(y==1 && x>0) printf("No\n");
	else if(x+1<y) printf("No\n");
	else
	{
		x-=y;
		x+=1;
		//printf("%d\n",x);
		if(x%2==0) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}