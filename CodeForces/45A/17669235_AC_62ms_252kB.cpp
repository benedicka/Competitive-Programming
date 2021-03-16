#include<bits/stdc++.h>
using namespace std;
string m[15],input;
int ans,x;
int main()
{
	m[0] = "January";
	m[1] = "February";
	m[2] = "March";
	m[3] = "April";
	m[4] = "May";
	m[5] = "June";
	m[6] = "July";
	m[7] = "August";
	m[8] = "September";
	m[9] = "October";
	m[10] = "November";
	m[11] = "December";
	cin>>input;
	scanf("%d",&x);
	for(int i=0;i<12;i++)
	{
		if(m[i]==input)
		{
			ans = i;
			break;
		}
	}
	ans+=x;
	ans%=12;
	cout<<m[ans]<<endl;
	return 0;
}