#include<stdio.h>
#include<vector>
using namespace std;
int c,a,b;
vector < int >  x;
int main()
{
	scanf("%d %d",&a,&b);
	x.push_back(b);
	while(b!=a && b>a)
	{
		if(b%2!=0 && b%10!=1)
		{
			break;
		}
		else if(b%10==1)
		{
			b/=10;
			x.push_back(b);
		}
		else if(b%2==0)
		{
			b/=2;
			x.push_back(b);
		}
	}
	if(b!=a) printf("NO\n");
	else if(b==a)
	{
		printf("YES\n");
		int s;
		s = x.size();
		printf("%d\n",s);
		for(int i=s-1;i>=0;i--)
		{
			printf("%d",x[i]);
			i==0?printf("\n"):printf(" ");
		}
	}
	return 0;
}