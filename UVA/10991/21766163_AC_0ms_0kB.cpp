#include<bits/stdc++.h>
using namespace std;
double r1,r2,r3,s1,s2,s3,d1,d2,d3,lt1,lt2,lt3;
int t;
const double pi = acos(-1.0);
double degree(double a)
{
	return a*pi/180.0;
}
double radtodegree(double a)
{
	return  a*180/pi;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf",&r1,&r2,&r3);
		s1 = r1+r2;
		s2 = r1+r3;
		s3 = r2+r3;
		d1 = radtodegree(acos((s3*s3-s1*s1-s2*s2)/(-2*s1*s2)));
		d2 = radtodegree(acos((s2*s2-s1*s1-s3*s3)/(-2*s3*s1)));
		d3 = radtodegree(acos((s1*s1-s2*s2-s3*s3)/(-2*s3*s2)));
		lt1 = s1*s2*sin(degree(d1))/2;
		lt2 = s1*s3*sin(degree(d2))/2;;
		lt3 = s3*s2*sin(degree(d3))/2;;
//		printf("cek = %lf %lf %lf lt = %lf %lf %lf\n",s1,s2,s3,lt1,lt2,lt3);
//		printf("d   = %lf %lf %lf\n",d1,d2,d3);
		printf("%.6lf\n",lt1 + (-d1*pi*r1*r1- d2*pi*r2*r2- d3*pi*r3*r3)/360);
	}
	return 0;
}