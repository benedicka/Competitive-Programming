#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double ax,ay,bx,by,cx,cy;
bool cek()
{
	if((ay-cy)*(cx-bx)==(cy-by)*(ax-cx)) return 1;
	return 0;
}
int main()
{

	double s1,s2;
	scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
	s1 = sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
	s2 = sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
	//printf("%lf %lf\n",s1,s2);
	if(s1==s2 && !cek()) printf("Yes\n");
	else printf("No\n");
	return 0;
}