#include<stdio.h>
#include<map>
#include<string>
#include<iostream>
using namespace std;
map < string , int > mp;
string day[30],x;
void pre()
{
	mp["pop"] = 0;
	mp["no"] = 1;
	mp["zip"] = 2;
	mp["zotz"] = 3;
	mp["tzec"] = 4;
	mp["xul"] = 5;
	mp["yoxkin"] = 6;
	mp["mol"] = 7;
	mp["chen"] = 8;
	mp["yax"] = 9;
	mp["zac"] = 10;
	mp["ceh"] = 11;
	mp["mac"] = 12;
	mp["kankin"] = 13;
	mp["muan"] = 14;
	mp["pax"] = 15;
	mp["koyab"] = 16;
	mp["cumhu"] = 17;
	mp["uayet"] = 18;
	
	day[0] = "imix";
	day[1] = "ik";
	day[2] = "akbal";
	day[3] = "kan";
	day[4] = "chicchan";
	day[5] = "cimi";
	day[6] = "manik";
	day[7] = "lamat";
	day[8] = "muluk";
	day[9] = "ok";
	day[10] = "chuen";
	day[11] = "eb";
	day[12] = "ben";
	day[13] = "ix";
	day[14] = "mem";
	day[15] = "cib";
	day[16] = "caban";
	day[17] = "eznab";
	day[18] = "canac";
	day[19] = "ahau";
}
int main()
{
	pre();
	int t,d,y,m;
	long long sum;
	scanf("%d",&t);
	cout<<t<<endl;
	while(t--)
	{
		scanf("%d.",&d);
		cin>>x;
		m = mp[x];
		scanf("%d",&y);
		//printf("%d %d %d\n",d,m,y);
		sum = d+m*20+365*y;
		//printf("%lld\n",sum);
		cout<<sum%13+1<<' '<<day[sum%20]<<' '<<sum/260<<endl;
	}
	return 0;
}