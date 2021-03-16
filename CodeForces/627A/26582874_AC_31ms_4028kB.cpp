#include<bits/stdc++.h>
using namespace std;
long long s,x,a,ans;

int main()
{
	scanf("%lld %lld",&s,&x);
	//SUM(A,B) = A XOR B + 2* (A AND B)
	a = s-x;
	if(a%2 || a<0) printf("0\n");
	else
	{
		a/=2;
		ans = 1;
	//	printf("AND = %lld XOR = %lld\n",a,x);
		for(int i=0;i<63;i++)
		{
			if(!(a&((long long)1<<i)) && !(x&((long long)1<<i))) ans*=1;
			else if((a&((long long)1<<i)) && !(x&((long long)1<<i))) ans*=1;
			else if(!(a&((long long)1<<i)) && (x&((long long)1<<i))) ans*=2;
			else
			{
				ans = 0;
				break;
			}
		}
		if(!a) ans-=2;
		printf("%lld\n",ans);
	}	
	return 0;
}