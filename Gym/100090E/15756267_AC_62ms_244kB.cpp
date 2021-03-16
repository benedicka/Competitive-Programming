#include<bits/stdc++.h>
using namespace std;
double p,q;
int main()
{
	scanf("%lf %lf",&p,&q);
	printf("%.7lf\n",((p/(p+q))*p + (q/(p+q))*q)/100);
	return 0;
}