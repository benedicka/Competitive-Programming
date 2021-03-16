#include<string>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int ans=0,n,a,b,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a+b+c>=2) ans++;
	}
	printf("%d\n",ans);
  	return 0;
}