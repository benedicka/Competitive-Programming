#include<stdio.h>
#include<string.h>
char input[100010];
bool ok;
bool habis(int b)
{
	int l,x;
	x = 0;
	l = strlen(input);
	for(int i=0;i<l;i++)
	{
		x=(x*10+input[i]-'0')%b;
	}
	if(x==0) return 1;
	return 0;
}
int main()
{
	ok = 0;
	while(scanf("%s",input)!=EOF)
	{
		if(ok) printf("\n");
		ok = 1;
		if((habis(4) &&!habis(100)) || habis(400)) 
		{
			printf("This is leap year.\n");
			if (habis(15)) printf("This is huluculu festival year.\n");
            if (habis(55)) printf("This is bulukulu festival year.\n");
		}
        else
        {
            if (habis(15)) printf("This is huluculu festival year.\n");
            else printf("This is an ordinary year.\n");
        }
	}
	return 0;
}