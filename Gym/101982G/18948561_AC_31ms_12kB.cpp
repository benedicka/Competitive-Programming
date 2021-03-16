#include<bits/stdc++.h>
using namespace std;
pair < double , double > rect[10];
pair < double , double > pt;
double x,y,xu1,yu1,xu2,yu2,jarak_min,tmp;
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
	u = ((pt.first - x1)*px +(pt.second - y1)*py) / dAB;
	x = x1+u*px;
	y = y1+u*py;
	if(dist(x1-x,y1-y)+dist(x2-x,y2-y)>dist(x1-x2,y1-y2) || dAB ==0)
	{
		if(dist(x1-pt.first,y1-pt.second)<dist(x2-pt.first,y2-pt.second))
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
	res = dist(pt.first-x,pt.second-y);
	return res;
}
int main()
{
	scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&xu1,&yu1,&xu2,&yu2);
	rect[0]= make_pair(xu1,yu1);
	rect[1]= make_pair(xu2,yu1);
	rect[2]= make_pair(xu2,yu2);
	rect[3]= make_pair(xu1,yu2);
	rect[4] = rect[0];
	pt = make_pair(x,y);
	for(int i=1;i<=4;i++)
	{
		if(rect[i].first*pt.first+rect[i].second*pt.second!=0)
		{
			tmp = pointtoline(rect[i-1].first,rect[i-1].second,rect[i].first,rect[i].second);
			if(i==1 || jarak_min>tmp)
			{
				jarak_min = tmp;
			}
		}
		else
		{
			tmp = min(dist(rect[i-1].first-pt.first, rect[i-1].second-pt.second),dist(pt.first-rect[i].first , pt.second-rect[i].second));
			if(i==1 || jarak_min>tmp)
			{
				jarak_min = tmp;
			}
		}
	}
	printf("%.3lf\n",jarak_min);
	return 0;
}