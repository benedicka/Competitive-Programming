#include<stdio.h>
#include<map>
#include<string>
#include<iostream>
using namespace std;
map < string , int > mp;
string bln[20];
int t,yy,mm,dd,cnt;
string m;
void pre()
{
	mp["January"] = 1;
	mp["February"] = 2;
	mp["March"] = 3;
	mp["April"] = 4;
	mp["May"] = 5;
	mp["June"] = 6;
	mp["July"] = 7;
	mp["August"] = 8;
	mp["September"] = 9;
	mp["October"] = 10;
	mp["November"] = 11;
	mp["December"] = 12;
	
	bln[1] = "January";
	bln[2] = "February";
	bln[3] = "March";
	bln[4] = "April";
	bln[5] = "May";
	bln[6] = "June";
	bln[7] = "July";
	bln[8] = "August";
	bln[9] = "September";
	bln[10] = "October";
	bln[11] = "November";
	bln[12] = "December";
}
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
	char delimiter('-');
	pre();
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%4d-",&yy);
		getline(cin,m,delimiter);
		scanf("%2d",&dd);
		mm = mp[m];
		scanf("%d",&cnt);
		//printf("%d %d %d\n",dd,mm,yy);
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
		printf("Case %d: %d-",tc,yy);
		cout<<bln[mm];
		printf("-%02d\n",dd);
	}
	return 0;
}