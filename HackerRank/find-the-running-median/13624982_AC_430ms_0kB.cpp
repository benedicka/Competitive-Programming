#include<queue>
#include<stdio.h>
using namespace std;
int main()
{
	priority_queue < int > d1;
	priority_queue < int > d2;
	int jum1,jum2,n,a,temp;
	scanf("%d",&n);
	jum1 = 0;
	jum2 = 0;
	while(n--)
	{
		scanf("%d",&a);
		if(jum1==0)
		{
			d1.push(a);
			jum1++;
		}
		else if(jum1>=jum2)
		{
			if(a<d1.top())
			{
				temp = d1.top();
				d1.pop();
				d1.push(a);
				d2.push(-1*temp);
			}
			else d2.push(-1*a);
			jum2++;
		}
		else
		{
			if(a>(-1*d2.top()))
			{
				temp = d2.top()*-1;
				d2.pop();
				d1.push(temp);
				d2.push(-1*a);
			}
			else d1.push(a);
			jum1++;
		}
		if(jum1==jum2) printf("%.1f\n",(float)(d1.top()+(-1*d2.top()))/2);
		else if(jum1>jum2)
		{
			printf("%.1f\n",(float)d1.top());
		}
		else 
		{
			printf("%.1f\n",(float)-1*d2.top());
		}
	}
	
	return 0;
}