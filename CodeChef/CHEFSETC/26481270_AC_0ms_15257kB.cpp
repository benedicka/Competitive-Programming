#include<bits/stdc++.h>
using namespace std;
int t,a[10];
bool ok,take[10];
void f(int x,int sum)
{
	if(!sum && x>0) 
	{
		ok = 1;
		return;
	}
	if(x==5) return;
	for(int i=0;i<4;i++)
	{
		if(!take[i])
		{
			take[i] = 1;
			f(x+1,sum+a[i]);
			if(ok) return;
			take[i] = 0;
		}
	}
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		for(int i=0;i<4;i++)
		{
			scanf("%d",&a[i]);
			take[i] = 0;
		}
		ok = 0;
		f(0,0);
		printf("%s\n",ok?"Yes":"No");
	}
	return 0;
}