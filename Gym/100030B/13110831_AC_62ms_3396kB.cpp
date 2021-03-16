
#include<stdio.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n,a,ans=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		ans+=(a-1);
	}
	if(ans%2==0) printf("Mike\n");
	else printf("Constantine\n");
	
	
	return 0;
}