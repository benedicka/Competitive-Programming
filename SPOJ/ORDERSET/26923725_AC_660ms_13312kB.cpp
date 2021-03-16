#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
pbd;
int q,x,ans;
char c;
pbd s;

int main()
{
  	scanf("%d",&q);
  	while(q--)
  	{
  		c = '!';
  		while(!isalpha(c))
		{
		  	c = getchar();
		}
		scanf("%d",&x);	
		switch(c)
		{
			case 'I':
				s.insert(x);
				break;
			case 'D':
	            s.erase(x);
	            break;
        	case 'K':
				if(s.find_by_order(x-1)!= s.end())
				{
	                ans = *s.find_by_order(x-1);
	                printf("%d\n",ans);
	            }
	            else  printf("invalid\n");
        		break;
        	case 'C':
        		printf("%d\n",s.order_of_key(x));
	            break;
		}
	}
    return 0;
}