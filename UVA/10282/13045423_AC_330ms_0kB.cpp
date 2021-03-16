#include<bits/stdc++.h>
using namespace std;
int main()
{
	map < string , string > dict;
	string str;
	string search;
	string eng;
	string a;
	while(getline(cin,eng))
	{
		//cout<<eng;
		if(eng=="") break;
		stringstream ss;
		ss<<eng;
		ss>>str;
		ss>>a;
//		cout<<a<<endl;
//		cout<<str<<endl;
		dict[a] = str;
		//cout<< dict[str]<<"\n";
	}
	while(getline(cin,search))
	{
		if(dict[search].empty()) printf("eh\n");
		else cout<<dict[search]<<"\n";
	}
	
	
	
	return 0;
}