#include<iostream>
#include<map>
#include<stdio.h>
#include<string>
using namespace std;
map< string , int > mp;
int t,h,m;
string from,to,x,z,ans;
void pre()
{
    mp["UTC"] = 0;
	mp["GMT"] = 0;
	mp["BST"] = 60;
    mp["IST"] = 60;
	mp["WET"] = 0;
	mp["WEST"] = 1*60;
    mp["CET"] = 1*60;
	mp["CEST"] = 2*60;
	mp["EET"] = 2*60;
    mp["EEST"] = 3*60;
	mp["MSK"] = 3*60;
	mp["MSD"] = 4*60;
    mp["AST"] = -4*60;
	mp["ADT"] = -3*60;
	mp["NST"] = -3*60-30;
    mp["NDT"] = -2*60-30;
	mp["EST"] = -5*60;
	mp["EDT"] = -4*60;
    mp["CST"] = -6*60;
	mp["CDT"] = -5*60;
	mp["MST"] = -7*60;
    mp["MDT"] = -6*60;
	mp["PST"] = -8*60;
	mp["PDT"] = -7*60;
    mp["HST"] = -10*60;
	mp["AKST"] = -9*60;
	mp["AKDT"] = -8*60;
    mp["AEST"] = 10*60;
	mp["AEDT"] = 11*60;
	mp["ACST"] = 9*60+30;
    mp["ACDT"] = 10*60+30;
	mp["AWST"] = 8*60;
}

int main()
{
	pre();
   	scanf("%d",&t);
   	while(t--)
   	{
   		h = m = 0;
   		cin>>x;
        if(x == "noon")
        {
            m = 12*60;
        }
        else if(x == "midnight")
        {
            m = 0;
        }
        else
        {
        	sscanf(x.c_str(),"%d:%d",&h,&m);
        	h%=12;
            cin>>z;
            m+= 60*h;
            if(z == "p.m.") m+=12*60;
		}
	//	cout<<m<<endl;
		cin>>from>>to;
		//cout<<m<<' '<<from<<' '<<to<<endl;
		m=(m-mp[from]+mp[to]+1440)%(24*60);
		//cout<<"from"<<":"<<mp[to]<<endl;
		
        if(m ==720)cout<<"noon\n";
        else if(m==0)cout<<"midnight\n";
        else
        {
        	//cout<<m<<endl;
            ans= (m>720 && m<1440) ? "p.m." : "a.m.";
            m%=(12*60);
			if(m/60==0)m+=12*60; 
            h = m/60;
            m = m%60;
            printf("%d:%02d",h,m);
			cout<<' '<<ans<<'\n';
        }
   	}
   return 0;
}