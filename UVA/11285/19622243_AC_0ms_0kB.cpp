#include<bits/stdc++.h>
using namespace std;
double usd[410],cd[410],r;
int d;

int main()
{
	while(scanf("%d",&d)!=EOF)
	{
		if(d==0) break;
		usd[0] = 0.0;
		cd[0] = 1000.0;
		for(int i=1;i<=d;i++)
		{
			scanf("%lf",&r);
			
			usd[i] = max(usd[i-1],floor(cd[i-1]*97/r)/100);
			cd[i] = max(cd[i-1],floor(usd[i-1]*r*97)/100);			
		}
		printf("%.2lf\n",cd[d]);
	}
	return 0;
}