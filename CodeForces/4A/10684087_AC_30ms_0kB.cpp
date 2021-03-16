#include <stdio.h>
int main ()
{
int w;
scanf("%d",&w);
if(w >=1 && w<=100 && w%2==0 && w >3)
{
    printf ("yes");
}
else
{
    printf ("no");
}
return 0;
}