#include<bits/stdc++.h>
using namespace std;
long double b1,p1,b2,p2;
long long t;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		cin>>b1>>p1>>b2>>p2;
		if(log(b1)*p1< log(b2)*p2) printf("Congrats\n");
		else if(log(b1)*p1> log(b2)*p2) printf("HaHa\n");
		else printf("Lazy\n");
	}
	return 0;
}