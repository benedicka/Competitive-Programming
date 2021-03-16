#include<stdio.h>
int d,m,y,df;
int leap(int y)
{
	if(y%400==0) return 1;
	if(y%100==0) return 0;
	if(y%4==0) return 1;
	return 0;
}
int hari(int m, int yy)
{
	if(m==4 || m==6 || m==9 ||  m==11) return 30;
	if(m==2)
	{
		return(28+leap(yy));
	}
	return 31;
}
int tahunkehari(int thn)
{
	int res = thn*365;
    res+= (thn/4-thn/100+thn/400);
	return res;
}
int bulankehari(int bln, int thn)
{
	int res = 0;
    for (int i=1;i<=bln;i++) 
	{
		res+=hari(i,thn);
	}
	return res;
}
int hariditahun(int yy)
{
	if(leap(yy)==1) return 366;
	else return 365;
}
int main()
{
	while(scanf("%d %d %d %d",&df,&d,&m,&y)!=EOF)
	{
		if(df==0 && d==0 && m==0 && y==0) break;
		m-=1;
		y-=1;
		d+=bulankehari(m,y);
        d+=tahunkehari(y);
		d+=df;
		
		y = 1;
	    while (d>hariditahun(y))
	    {
	        d-=hariditahun(y);
	        y++;
	    }
	    m = 1;
	    while (d>hari(m,y))
	    {
	        d-=hari(m,y);
	        m++;
	    }
	    printf("%d %d %d\n",d,m,y);
	}
	return 0;
}