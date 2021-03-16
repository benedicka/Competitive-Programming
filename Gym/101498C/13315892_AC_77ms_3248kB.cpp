#include<stdio.h>
using namespace std;
int main()
{
	int t,a[3],ans,c;
	scanf("%d",&t);
	while(t--)
	{
		for(int i=0;i<3;i++)
		{
			scanf("%d",&a[i]);
			if(i==0)
			{
				c = a[i];
				ans = i;
			}
			else if(a[i]<c)
			{
				c = a[i];
				ans = i;
			}
		}
		if(ans==0) printf("First\n");
		else if(ans==1) printf("Second\n");
		else if(ans==2) printf("Third\n");
	}
	
	return 0;
}