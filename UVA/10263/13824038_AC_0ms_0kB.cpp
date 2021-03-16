#include<stdio.h>
#include<utility>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
pair< double , double > m;
pair< double , double > A;
pair< double , double > B;
pair< double , double > pt[1010];
double jarak_min,alas,tinggi,s1,s2,kel,luas;
int n;
bool line(double ax, double ay, double bx, double by, double cx, double cy)
{
	
	if((ay-cy)*(cx-bx)==(cy-by)*(ax-cx)) return 1;
	return 0;
}

double dist(double a,double b)
{
	double res;
	//printf("a = %lf b = %lf\n",a,b);
	res = sqrt(a*a+b*b);
	return res;
}
double pointtoline(double x1, double y1, double x2, double y2)
{
    double px,py,dAB,u,x,y,res;
	px = x2-x1;
	py = y2-y1 ;
	dAB = px*px + py*py;
	u = ((m.first - x1)*px +(m.second - y1)*py) / dAB;
	x = x1+u*px;
	y = y1+u*py;
	if(dist(x1-x,y1-y)+dist(x2-x,y2-y)>dist(x1-x2,y1-y2) || dAB ==0)
	{
		if(dist(x1-m.first,y1-m.second)<dist(x2-m.first,y2-m.second))
		{
			x = x1;
			y = y1;
		}
		else
		{
			x = x2;
			y = y2;
		}
	}	
	res = dist(m.first-x,m.second-y);
	return res;
}
void getSpPoint()
{
    double x1=A.first, y1=A.second, x2=B.first, y2=B.second, x3=m.first, y3=m.second;
    double px,py,dAB,u,x,y;
	px = x2-x1;
	py = y2-y1 ;
	dAB = px*px + py*py;
	u = ((x3 - x1)*px +(y3 - y1)*py) / dAB;
	x = x1+u*px;
	y = y1+u*py;
	//printf("hasil %lf %lf\n",x,y);
	if(dist(x1-x,y1-y)+dist(x2-x,y2-y)>dist(x1-x2,y1-y2) || dAB ==0)
	{
		//printf("%lf %lf %lf\n",dist(x1-x,y1-y),dist(x2-x,y2-y),dist(x1-x2,y1-y2));
		if(dist(x1-x3,y1-y3)<dist(x2-x3,y2-y3))
		{
			x = x1;
			y = y1;
		}
		else
		{
			x = x2;
			y = y2;
		}
	}	
		
   
	printf("%.4lf\n%.4lf\n",x,y);

}
int main()
{
	while(scanf("%lf %lf",&m.first,&m.second)!=EOF)
	{
		scanf("%d",&n);
		for(int i=0;i<=n;i++)
		{
			scanf("%lf %lf",&pt[i].first,&pt[i].second);
		}
		for(int i=1;i<=n;i++)
		{
			if(pt[i].first*m.first+pt[i].second*m.second!=0)
			{
				tinggi = pointtoline(pt[i-1].first,pt[i-1].second,pt[i].first,pt[i].second);
				if(i==1 || jarak_min>tinggi)
				{
					A = pt[i-1];
					B = pt[i];
					jarak_min = tinggi;
				}
			}
			else
			{
				tinggi = min(dist(pt[i-1].first-m.first, pt[i-1].second-m.second),dist(m.first-pt[i].first , m.second-pt[i].second));
				if(i==1 || jarak_min>tinggi)
				{
					A = pt[i-1];
					B = pt[i];
					jarak_min = tinggi;
				}
			}
			//printf("%lf titik-%d titik-%d\n",tinggi,i-1,i);
		}
	//	printf ("titik1 = (%llf,%llf) titik2 = (%llf,%llf)\n",A.first,A.second,B.first,B.second);
		getSpPoint();
	}
	
	
	return 0;
}