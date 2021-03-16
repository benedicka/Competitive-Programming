#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int x,n,p,a;
	scanf("%d",&x);
	scanf("%d",&n);
	a = x*n;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&p);
		a =a-p;
	}
	printf("%d\n",a+x);
	return 0;
}