#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int k,q,too,diff; 
    while (scanf("%d %d %d", &k, &q, &too)!=EOF)
    {
        if(k==q)
        {
            printf("Illegal state\n");
        }
        else if(((too-q)%8!=0 && too/8!=q/8) || q == too)
        {
            printf("Illegal move\n");
        }
        else if(((k-q)%8==0 && (k-too)%8==0) || (k/8==too/8  && k/8 == q/8))
        {
            if(k<=max(q,too)&&k>=min(q,too))
            {
                printf("Illegal move\n");
            }
            else
	        {	        	
	        	diff = abs(k-too);
		        if (diff==8 ||(diff==1 && k/8 == too/8)) printf("Move not allowed\n");
		        else if ((k==0 && too==9) || (k==7 && too==14) || (k==56 && too==49) || (k==63 && too==54)) printf("Stop\n");
		        else printf("Continue\n");
			}   
        }
        else
        {	
        	diff = abs(k-too);
	        if (diff==8 ||(diff==1 && k/8 == too/8)) printf("Move not allowed\n");
	        else if ((k==0 && too==9) || (k==7 && too==14) || (k==56 && too==49) || (k==63 && too==54)) printf("Stop\n");
	        else printf("Continue\n");
		}       
    }
    return 0;
}