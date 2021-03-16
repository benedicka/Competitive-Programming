#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int a[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	std:: sort(a,a+n);
	printf("%d\n",a[n/2]);
	
	
	return 0;
}