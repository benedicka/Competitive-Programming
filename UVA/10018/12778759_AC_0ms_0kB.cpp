#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long t,c,a,b,num1,num2;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&a);
		c=0;
		num1 = a;
		num2 = 0;
		while (num1!=num2)
		{
			num2 = 0;
			while (a!=0)
			{
				num2+=a%10;
				num2=num2*10;
				a/=10;
			}
			
			num2/=10;
			if(num1!=num2)
			{
				num1+=num2;
				c++;
				a=num1;
			}
			else break;
		}
		printf("%ld %ld\n",c,num1);
	}
	
	return 0;
}