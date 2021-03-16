#include <stdio.h>
int main ()
{
    int t,a;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&a);
        if (a%2==0) printf ("%d is even\n",a);
        else printf("%d is odd\n",a);
    }
    
    
    
    return 0;
}