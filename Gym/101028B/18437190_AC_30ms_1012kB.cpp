#include<bits/stdc++.h>
using namespace std;

int main()
{
	string x,y;
	int t,lx,ly;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		lx = x.size();
		ly = y.size();
		if(lx!=ly) cout<<"No"<<endl;
		else
		{
			bool ok=1;
			for(int i=0;i<lx;i++)
			{
				if(tolower(x[i])==tolower(y[i])) continue;	
				if(tolower(x[i])=='b' && tolower(y[i])=='p') ok = 1;
				else if(tolower(x[i])=='i' && tolower(y[i])=='e') ok = 1;
				else if(tolower(x[i])=='p' && tolower(y[i])=='b') ok = 1;
				else if(tolower(x[i])=='e' && tolower(y[i])=='i') ok = 1;
				else if(tolower(x[i])!=tolower(y[i])) ok = 0;
			}
			printf("%s\n",ok?"Yes":"No");
		}
	}
	return 0;
}