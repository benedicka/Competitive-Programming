#include<bits/stdc++.h>
using namespace std;
bool ok;
string a,b,c;

int main()
{
	cin>>a>>b>>c;
	if((a==b && a==c)|| (a!=b && a!=c && b!=c)) printf("?\n");
	else
	{
		if(a==b)
		{
			if((a=="rock" && c=="paper") || (a=="scissors" && c=="rock") || (a=="paper" && c=="scissors")) printf("S\n");
			else printf("?");
		}
		else if(a==c)
		{
			if((a=="rock" && b=="paper") || (a=="scissors" && b=="rock") || (a=="paper" && b=="scissors")) printf("M\n");
			else printf("?");
		}
		else
		{
			if((b=="rock" && a=="paper") || (b=="scissors" && a=="rock") || (b=="paper" && a=="scissors")) printf("F\n");
			else printf("?");
		}
	}
	return 0;
}