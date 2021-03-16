#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int t,len;
char x[410],s[410],top;
int prec(char c) 
{ 
    if(c == '^') return 3;
	if(c == '*' || c == '/') return 2; 
   	if(c == '+' || c == '-') return 1;
	return -1; 
} 
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&x);
		len = strlen(x);
		string ans="";
		top = 0;
		for(int i=0;i<len;i++)
		{
			if(isalpha(x[i])) ans+=x[i]; 
			else if(x[i] == '(') 
			{
				s[top++]='(';
			}
	        else if(x[i] == ')') 
	        { 
	            while(top!=0 && s[top-1]!='(') 
	            { 
	                ans+=s[top-1];
	                top-=1;
	            } 
	            if(s[top-1] == '(') 
	            { 
	                top-=1;
	            } 
	        } 
	        else
			{ 
	            while(top!=0 && prec(x[i]) <= prec(s[top-1])) 
	            { 
					ans+=s[top-1]; 
	                top-=1; 
	            } 
	            s[top++] = x[i]; 
	        } 
		}
		while(top!=0) 
	    { 
	        ans +=s[top-1]; 
	        top-=1;
	    }
		cout<<ans<<endl; 
	}
	return 0;
}