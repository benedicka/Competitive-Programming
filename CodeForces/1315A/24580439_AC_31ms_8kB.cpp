#include<bits/stdc++.h>
using namespace std;
int n,x,y,a,b,ans;

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d %d",&x,&y,&a,&b);
		a+=1;
		b+=1;
		printf("%d\n",max(max((a-1)*y,x*(b-1)),max((x-a)*y,x*(y-b))));
	}	
	return 0;
}