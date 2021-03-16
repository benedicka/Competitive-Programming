#include<string>
#include<iostream>
#include<string.h>
using namespace std;
bool isvowel(char x)
{
	x = toupper(x);
	if(x=='A' || x=='O' || x=='Y' || x=='E' || x=='U' || x=='I') return 1;
	return 0;
}
int main()
{
	char input[110];
	int l;
	scanf("%s",input);
	l = strlen(input);
	for(int i=0;i<l;i++)
	{
		if(!isvowel(input[i]))
		{
			printf(".%c",tolower(input[i]));
		}
	}
	printf("\n");
  	return 0;
}