#include<bits/stdc++.h>
using namespace std;
int t;
double ax,ay,bx,by,cx,cy,mad,mbe,mcf,cad,cbe,ccf,dx,dy,ex,ey,fx,fy,px,py,qx,qy,rx,ry,s1,s2,s3,s;
double dist(double a, double b, double c, double d)
{
	return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
		dx = bx+(cx-bx)/3;
		dy = by+(cy-by)/3;
		ex = cx+(ax-cx)/3;
		ey = cy+(ay-cy)/3;
		fx = ax+(bx-ax)/3;
		fy = ay+(by-ay)/3;
		mad = (ay-dy)/(ax-dx);
		mbe = (by-ey)/(bx-ex);
		mcf = (cy-fy)/(cx-fx);
		cad = (-ax*(dy-ay))/(dx-ax) + ay;
		cbe = (-bx*(ey-by))/(ex-bx) + by;
		ccf = (-cx*(fy-cy))/(fx-cx) + cy;
//		printf("%lf %lf\n%lf %lf\n%lf %lf\n\n",ax,ay,fx,fy,bx,by);
//		printf("%lf %lf\n%lf %lf\n%lf %lf\n\n",bx,by,dx,dy,cx,cy);
//		printf("%lf %lf\n%lf %lf\n%lf %lf\n\n",ax,ay,ex,ey,cx,cy);
		px = -1*(cad-cbe)/(mad-mbe);
		py = mad*px+cad;
		qx = -1*(cbe-ccf)/(mbe-mcf);
		qy = mbe*qx+cbe;
		rx = -1*(cad-ccf)/(mad-mcf);
		ry = mcf*rx+ccf; 
		s1 = dist(px,py,qx,qy);
		s2 = dist(px,py,rx,ry);
		s3 = dist(qx,qy,rx,ry);
		s = (s1+s2+s3)/2;
		printf("%.0lf\n",sqrt(s*(s-s1)*(s-s2)*(s-s3)));
	}	
	return 0;
}