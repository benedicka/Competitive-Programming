#include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <map>
#include <queue>
#include <math.h>
#include <climits>
using namespace std;
long long x,tmp;
int main()
{
    while(scanf("%lld",&x)!=EOF)
    {
        printf("TERM %lld IS ",x);
        tmp = 0;
        for(int i=1;i<=10000;i++)
        {
            tmp+=i;
            if(tmp>=x)
            {
                tmp-=x;
                if(i%2==0)
                {
                    printf("%lld/%lld\n",i-tmp,1+tmp);
                }
                else
                {
                    printf("%lld/%lld\n",1+tmp,i-tmp);
                }
                break;
            }
        }
    }
    
    return 0;
}

