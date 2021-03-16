# include <stdio.h>
int main()
{

   long t,n;
    scanf("%ld",&t);
    while(t--)
    {
    scanf ("%ld",&n);
	printf("%ld \n",n-1+n*n/2-3*n/2+1);
    }
    return 0;
}