#include <stdio.h>

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
		int count = 0;
		while(b > 1 && k-- && l--)
		{
			b -= 2, ++count;
		}
		printf("%i\n", count);
	}
}