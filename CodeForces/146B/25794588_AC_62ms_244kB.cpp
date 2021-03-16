#include<bits/stdc++.h>
using namespace std;
int a,b;
int reverse(int x)
{
	int res = 0;
	while(x>0)
	{
		res+=(x%10);
		res*=10;
		x/=10;
	}
	return res/10;
}
bool ok(int x)
{
	int res=0;
	while(x>0)
	{
		if(x%10==4||x%10==7)
		{
			res+=(x%10);
			res*=10;
		}
		x/=10;
	}
	res/=10;
	return reverse(res)==b;
}
int main()
{
	scanf("%d %d",&a,&b);
	a++;
	while(1)
	{
		if(ok(a))
		{
			printf("%d\n",a);
			
			return 0;
		}
		a++;
	}
	return 0;
}