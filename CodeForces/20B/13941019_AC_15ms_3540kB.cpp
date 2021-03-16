#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
double ans1,ans2,a,b,c,d;
bool cek()
{
	d = b*b-4*a*c;
	if(d<0) return 0;
	else return 1;
}
int main()
{
	scanf("%lf %lf %lf",&a,&b,&c);
	if(!cek()) printf("0");
	else
	{
		ans1 = (-1*b+sqrt((double)d))/(2*a);
		ans2 = (-1*b-sqrt((double)d))/(2*a);
		if(d==0 && a!=0)
		{
			printf("%d\n",1);
			printf("%lf\n",ans1);
		}
		else if(a==0 && b!=0 && c!=0)
		{
			printf("1\n");
			printf("%.6lf\n",(-1*c)/b);
		}
		else if(a==0 && b!=0 && c==0) printf("1\n0\n");
		else if(a==0 && b==0 && c==0) printf("-1\n");
		else if(a==0 && b==0 && c!=0) printf("0\n");
		else
		{
			printf("%d\n",2);
			printf("%.6lf\n",ans1<ans2?ans1:ans2);
			printf("%.6lf\n",ans1>ans2?ans1:ans2);
		}
	}
	return 0;
}