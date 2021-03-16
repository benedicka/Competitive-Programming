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
	int n,d,m,y,c,cnt;
	long long ans,now,x,z;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		ans = cnt =  0;
		now = 0;
		while(n--)
		{
			scanf("%d %d %d %d",&d,&m,&y,&c);
			y-=1;
			m-=1;
			x = d+tahunkehari(y)+bulankehari(m,y+1);
			if(x-now==1)
			{
				//printf("%d\n",y+1);
				ans+=(c-z);
				cnt++;
			}
			now = x;
			z = c;
		}
		printf("%d %lld\n",cnt,ans);
	}
	return 0;
}