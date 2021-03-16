#include<stdio.h>
#include<string>
#include<ctype.h>
#include<stdlib.h>
#include <set>
#include<string.h>
#include <iostream>
using namespace std;
char input;
set <string> kamus;
string str;
int main()
{
	
	while((input = getchar())!=EOF)
	{
		//if(input=='!') break;
		if(!isalpha(input))
		{
			if(!str.empty())
			{
				kamus.insert(str);
				str.erase();
			}
		}
		//if(isdigit(input)) break;
		else str+=tolower(input);
	
	}
	for(set<string>::iterator it =kamus.begin(); it!=kamus.end(); it++)
	{
		cout<<*it<<endl;
	}
	
	
	
	return 0;
}