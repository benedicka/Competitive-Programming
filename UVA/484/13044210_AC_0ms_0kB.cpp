#include<stdio.h>
#include<map>
#include<vector>
#include<iterator>
#include<iostream>
using namespace std;
int main()
{
	map < int , int > ans;
	vector<int> input;
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		ans[a]++;
		if(ans[a]==1)
		{
			input.push_back(a);
		}
	}
	
	for(int i=0;i<ans.size();i++)
	{
		printf("%d %d\n",input[i],ans[input[i]]);
	}
    return 0;
}