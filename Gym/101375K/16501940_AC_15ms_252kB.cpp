#include<bits/stdc++.h>
using namespace std;

int main()
{
	string x;
	int l;
	getline(cin,x);
	if(x[x.size()-1]=='?') printf("7\n");
	else
	{
		bool ok = 0;
		l = x.size();
		x[l] = '\0';
		string tmp="";
		for(int i=0;i<=l;i++)
		{
			if(isalpha(x[i]))tmp+=x[i];
			if(x[i]==' '|| x[i]=='\0')
			{
				if(tmp=="Sussu")
				{
					ok = 1;
					printf("AI SUSSU!\n");
					break;
				}
				tmp = "";
			}
		}
		if(!ok)printf("O cara é bom!\n");
	}
	return 0;
}