#include<bits/stdc++.h>
using namespace std;

string Zellercongruence(int day, int month, int year) 
{ 
	int k,j,h;
	string res;
	if (month == 1) 
	{ 
	    month = 13; 
	    year--; 
	} 
	if (month == 2) 
	{ 
	    month = 14; 
	    year--; 
	}  
	k = year%100; 
	j = year/100; 
	h = day+13*(month+1)/5+ k + k/4 + j/4 + 5*j; 
//	printf("h : %d\n",h);
	h%=7; 
//	printf("h : %d\n",h);
	if(h==0) res = "Saturday"; 
	else if(h==1) res = "Sunday"; 
	else if(h==2) res = "Monday"; 
	else if(h==3) res = "Tuesday"; 
	else if(h==4) res = "Wednesday";
	else if(h==5) res = "Thursday";
	else if(h==6) res = "Friday";
	return res;
}  
int main() 
{ 
	int t,d,m,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&d,&m,&y);
		cout<<Zellercongruence(d,m,y)<<'\n';
	}
	return 0; 
} 