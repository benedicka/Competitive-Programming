#include <stdio.h>
#include <math.h> 
long gcd(long a,long b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}


int main()
{
    long n,a,b,fpb;
    scanf("%ld",&n);
    while(n--)
    {
    	scanf("%ld %ld",&a,&b);
    	fpb = gcd(a,b);
    	printf("%ld %ld\n",fpb,(a*b)/fpb);
    	
	}
    
    return 0;
}

