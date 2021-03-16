#include<bits/stdc++.h>
using namespace std;
int t,ans;
int x_1,x_2,y_1,y_2,n;
int main()
{
	scanf("%d",&t);
	scanf("%d",&n);
	while(t--)
	{
		scanf("%d %d %d %d",&x_1,&y_1,&x_2,&y_2);
		if((x_1+y_1)%2!=(x_2+y_2)%2) printf("can't reach!\n");
		else
		{
			printf("%d\n",max(abs(x_1-x_2),abs(y_1-y_2)) );
		}
	}
	return 0;
}