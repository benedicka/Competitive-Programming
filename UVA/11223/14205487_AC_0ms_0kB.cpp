#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using namespace std;
map<string, char> mp;
int t;
long long l;
string x,ans,tmp;
void pre()
{
    mp[".-"] = 'A';
	mp["-..."] = 'B';
	mp["-.-."] = 'C';
    mp["-.."] = 'D';
	mp["."] = 'E';
	mp["..-."] = 'F';
    mp["--."] = 'G';
	mp["...."] = 'H';
	mp[".."] = 'I';
    mp[".---"] = 'J';
	mp["-.-"] = 'K';
	mp[".-.."] = 'L';
    mp["--"] = 'M';
	mp["-."] = 'N';
	mp["---"] = 'O';
    mp[".--."] = 'P'; 
	mp["--.-"] = 'Q'; 
	mp[".-."] = 'R';
    mp["..."] = 'S'; 
	mp["-"] = 'T'; 
	mp["..-"] = 'U';
    mp["...-"] = 'V'; 
	mp[".--"] = 'W'; 
	mp["-..-"] = 'X';
    mp["-.--"] = 'Y'; 
	mp["--.."] = 'Z';
    mp["-----"] = '0';
	mp[".----"] = '1';
	mp["..---"] = '2';
    mp["...--"] = '3';
	mp["....-"] = '4';
	mp["....."] = '5';
    mp["-...."] = '6';
	mp["--..."] = '7';
	mp["---.."] = '8';
    mp["----."] = '9';
    mp[".-.-.-"] = '.';
	mp["--..--"] = ',';
	mp["..--.."] = '?';
    mp[".----."] = '\'';
	mp["-.-.--"] = '!';
	mp["-..-."] = '/';
    mp["-.--."] = '(';
	mp["-.--.-"] = ')';
	mp[".-..."] = '&';
    mp["---..."] = ':';
	mp["-.-.-."] = ';';
	mp["-...-"] = '=';
    mp[".-.-."] = '+';
	mp["-....-"] = '-';
	mp["..--.-"] = '_';
    mp[".-..-."] = '"';
	mp[".--.-."] = '@';
}

int main()
{
    pre();
    cin >> t;
    getchar();
    for (int tc = 1; tc <= t; tc++)
    {
        getline(cin, x);
        ans.clear(); 
        l = x.size();
        tmp.clear();
       	for(int i=0;i<=l;i++)
       	{
       		if((x[i]==' ' || x[i]=='\0' )&& !tmp.empty())
       		{
			 	ans+=(mp[tmp]);
				tmp.clear();
			}
			if(x[i]!=' ')tmp+=x[i];
			if(i>0 && x[i-1]==' ' && x[i]==' ') ans+=' ';
		}
        cout << "Message #" << tc <<endl;
        cout << ans <<endl;
        if (t != tc) cout <<endl;
    }
}