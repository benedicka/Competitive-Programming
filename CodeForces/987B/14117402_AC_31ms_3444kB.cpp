#include<math.h>
#include<iostream>
#include<stdio.h>
long double x,y,a,b;
int main()
{
	std::cin>>x>>y;
	a = y*log(x);
	b = x*log(y);
	if(a==b) printf("=\n");
	else if(a<b) printf("<\n");
	else printf(">\n");
	return 0;
}