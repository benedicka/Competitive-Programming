#include<string>
#include<ctype.h>
#include<iostream>
using namespace std;
string input;
char a;
long long size;
bool awal;
bool cek(char x)
{
	if(x=='a' || x=='A' || x=='i' || x=='I' || x=='u' || x=='U' || x=='e' || x=='E' || x=='o' || x=='O') return 1;
	return 0;
}
int main()
{
	a = '\0';
	while(getline(cin,input))
	{
		awal = 1;
		size = input.size();
		for(long long i=0;i<size;i++)
		{
			if(!isalpha (input[i]))
			{
				if(isalpha(input[i-1]))
				{
					if(a!='\0')cout<<a;
					a = '\0';
					cout<<"ay";
				}
				cout<<input[i];
				awal = 1;
			}
			else
			{
				if(awal==1 && !cek(input[i]))
				{
					 a = input[i];
					 awal = 0;
				}
				else
				{
					awal = 0;
					cout<<input[i];
				}
			}
		}
		cout<<endl;
	}
	
	return 0;
}