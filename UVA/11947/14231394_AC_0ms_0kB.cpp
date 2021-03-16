#include<stdio.h>
#include<map>
#include<stdlib.h>
using namespace std;
int mm,dd,yy,t,cnt;
int leap(int y)
{
	if(y%400==0) return 1;
	if(y%100==0) return 0;
	if(y%4==0) return 1;
	return 0;
}
int hari(int m)
{
	if(m==4 || m==6 || m==9 ||  m==11) return 30;
	if(m==2)
	{
		return(28+leap(yy));
	}
	return 31;
}
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%2d%2d%4d",&mm,&dd,&yy);
		printf("%d ",tc);
		cnt = 280;
		while(cnt>0)
		{
			dd++;
			if(dd>hari(mm))
			{
				dd = 1;
				mm++;
			}
			if(mm>12)
			{
				mm = 1;
				yy++;
			}
			cnt--;
		}
		printf("%02d/%02d/%4d ",mm,dd,yy);
		if ((dd>=21 && mm==1)  || (dd<=19 && mm==2)) printf("aquarius\n");
     	else if ((dd>=20 && mm==2)  || (dd<=20 && mm==3)) printf("pisces\n");
     	else if ((dd>=21 && mm==3)  || (dd<=20 && mm==4)) printf("aries\n");
     	else if ((dd>=21 && mm==4)  || (dd<=21 && mm==5)) printf("taurus\n");
     	else if ((dd>=22 && mm==5)  || (dd<=21 && mm==6)) printf("gemini\n");
     	else if ((dd>=22 && mm==6)  || (dd<=22 && mm==7)) printf("cancer\n");
     	else if ((dd>=23 && mm==7)  || (dd<=21 && mm==8)) printf("leo\n");
     	else if ((dd>=22 && mm==8)  || (dd<=23 && mm==9)) printf("virgo\n");
     	else if ((dd>=24 && mm==9)  || (dd<=23 && mm==10)) printf("libra\n");
     	else if ((dd>=24 && mm==10) || (dd<=22 && mm==11)) printf("scorpio\n");
     	else if ((dd>=23 && mm==11) || (dd<=22 && mm==12)) printf("sagittarius\n");
     	else if ((dd>=23 && mm==12) || (dd<=20 && mm==1))  printf("capricorn\n");
	}
	return 0;
}