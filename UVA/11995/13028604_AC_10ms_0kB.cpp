#include<stdio.h>
#include<stack>
#include<queue>
using namespace std;
int main()
{
	stack <int> st;
	queue <int> q;
	priority_queue <int> pr;
	bool isqueue,isstack,ispriority;
	int n;
	int num,a;
	while (scanf("%d",&n)!=EOF)
	{
		isqueue = 1;
		isstack = 1;
		ispriority = 1;
		while(n--)
		{

			scanf("%d %d",&num,&a);
			if(num==1)
			{
				st.push(a);
				q.push(a);
				pr.push(a);
			}
			else if(num==2)
			{
				if(!st.empty())
				{
					if(a!=st.top()) isstack = 0;
					if(a!=q.front()) isqueue = 0;
					if(a!=pr.top()) ispriority = 0;
					pr.pop();
					st.pop();
					q.pop();
				}
				else
				{
					isqueue = 0;
					isstack = 0;
					ispriority = 0;

				}
			}
			
		}
		//printf("isstack = %d ispriority = %d isqueue = %d\n",isstack,ispriority,isqueue);
		if((isstack == 1 && isqueue == 1)||(isqueue == 1 && ispriority == 1)||(ispriority == 1&& isstack ==1) || (isstack == 1 && isqueue ==1&& ispriority == 1) ) printf("not sure\n");
		else if(isstack==1) printf("stack\n");
		else if(isqueue==1) printf("queue\n");
		else if(ispriority==1) printf("priority queue\n");
		else printf("impossible\n");
		while(!st.empty())
		{
			st.pop();
		}
		while(!q.empty())
		{
			q.pop();
		}
		while(!pr.empty())
		{
			pr.pop();
		}
	}

	
	return 0;
}