#include<bits/stdc++.h>
using namespace std;
double cow,car,total,show,sisa;
int main()
{
	while(scanf("%lf %lf %lf",&cow,&car,&show)!=EOF)
	{
		total = cow + car;
		sisa = total - show - 1;
		printf("%.5lf\n",(cow/total)*(car/sisa) + (car/total)*((car-1)/sisa));
	}
	return 0;
}

