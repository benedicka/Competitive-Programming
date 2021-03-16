#include <stdio.h>
int min(int a, int b)
{
       if(a<b) return a;
       else return b;
}
int main()
{
	int t, n;
	char s[100];
	int b, k, l;
	scanf("%i", &t);
	while(t--)
	{
		scanf("%i", &n);
		b = k = l = 0;
		while(n--)
		{
			scanf("%s", s);
			if(s[0] == 'b') ++b;
			else if(s[0] == 'k') ++k;
			else ++l;
		}
		int count = min(b/2,min(k,l));
		printf("%i\n", count);
	}
}