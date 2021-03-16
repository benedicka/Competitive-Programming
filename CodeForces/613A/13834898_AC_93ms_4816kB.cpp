#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846
#include<utility>
using namespace std;
pair < double , double > p;
double min_x,min_y,max_x,max_y,x[100010],y[100010],min,max;
double dist(double a,double b)
{
	return a*a+b*b;
}

void pointtoline(double x1, double y1, double x2, double y2)
{
    double px,py,dAB,u,x,y,res;
	px = x2-x1;
	py = y2-y1 ;
	dAB = px*px + py*py;
	u = ((p.first - x1)*px +(p.second - y1)*py) / dAB;
	x = x1+u*px;
	y = y1+u*py;
	if(dist(x1-x,y1-y)+dist(x2-x,y2-y)>dist(x1-x2,y1-y2))
	{
		if(dist(x1-p.first,y1-p.second)<dist(x2-p.first,y2-p.second))
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
	//printf("%lf %lf %lf \n",x,y,dist(p.first-x,p.second-y));
	if(min>dist(p.first-x,p.second-y))
	{
		min = dist(p.first-min_x,p.second-min_y);
		min_x = x;
		min_y = y;
	}
	
}

int main()
{
	int n,idx;
	idx = 1;
	scanf("%d %lf %lf",&n,&p.first,&p.second);
	for(int i=0;i<n;i++)scanf("%lf %lf",&x[i],&y[i]);
	for(int i=0;i<n;i++)
	{
		
		//printf("%lf %lf\n",dist(p.first-x,p.second-y),min);
		if(i==0)
		{
			min_x = max_x = x[i];
			min_y = max_y = y[i];
			min = max = dist(p.first-x[i],p.second-y[i]);
		}
		else if(dist(p.first-x[i],p.second-y[i])<min)
		{
			min = dist(p.first-x[i],p.second-y[i]);
			min_x = x[i];
			min_y = y[i];
		}
		else if(dist(p.first-x[i],p.second-y[i])>max)
		{
			max = dist(p.first-x[i],p.second-y[i]);
			max_x = x[i];
			max_y = y[i];
		}
		//printf("%lf %lf %lf %lf\n",x[i],y[i],x[idx],y[idx]);
		pointtoline(x[i],y[i],x[idx],y[idx]);
		idx+=1;
		if(idx==n) idx = 0;
	}
//	printf("min = %lf %lf    max = %lf \n",min_x,min_y,max);
	max = (max_x-p.first)*(max_x-p.first)+(max_y-p.second)*(max_y-p.second);
	min = (min_x-p.first)*(min_x-p.first)+(min_y-p.second)*(min_y-p.second);
	//printf("%lf %lf\n",min,max);
	if(min!=max)printf("%.7lf\n",pi*(max-min));
	else if(min==max || min==0) printf("%.7lf\n",pi*max);
	return 0;
}
	
	