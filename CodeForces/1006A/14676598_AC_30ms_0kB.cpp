#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(i!=0) printf(" ");
		scanf("%d",&a);
		printf("%d",a%2==0?a-1:a);
	}
	printf("\n");
	return 0;
}