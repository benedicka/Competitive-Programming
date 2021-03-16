#include<stdio.h>
#include<string>
#include<ctype.h>
#include<stdlib.h>
#include <set>

using namespace std;
char input;
set <char> simple;
int main()
{
    int max1=0,max2=0,length;
    char x[120];
    int ans,total=0;
    while((input = getchar())!=EOF)
    {
        //if(input=='!') break;
        if(!isalpha(input))
        {
        	max1=0;
        	max2=0;
		    int c = 0;
		    //printf("length = %d\n",total);
		    if(simple.size()>2)
		    {
		        for(int i='a';i<='z';i++)
		        {
		            for(int j =0;j<total;j++)
		            {
		                if(i==x[j]) c++;
		            }
		            if(c>=max1)
		            {
		                max2 = max1;
		                max1 = c;
		            }
		            else if(c>max2 && c<max1)
		            {
		                max2 = c;
		            }
		            c = 0;
		        }
		        printf("%d\n",total-max2-max1); 
		    }
		    else printf("%d\n",0);
		    simple.clear();
        }
        else if (isalpha(input))
        {
            simple.insert(input);
            x[total] = input;
            total++;
        }
    }
  
    
            
    
    
    return 0;
}