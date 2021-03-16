#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
using namespace std;
double h,m,ans,sudutjam,sudutmenit;
int main()
{
	while(scanf("%lf:%lf",&h,&m)!=EOF)
	{
		if(h==0 && m==0) break;
		ans = 0;
		sudutjam = h*30+(m/60)*30;
		sudutmenit = m*6;
		ans = sudutjam-sudutmenit;
		//printf("ans = %lf\n",ans);
		if(ans<0) ans*=-1;
		if(ans>180) ans = 360-ans;
		printf("%.3lf\n",ans);  
	}
	return 0;
}