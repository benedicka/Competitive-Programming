#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a,genap;
bool ok;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a%2==0) genap++;
	}
	if(genap==n) printf("Second");
	else printf("First\n");

	return 0;
}