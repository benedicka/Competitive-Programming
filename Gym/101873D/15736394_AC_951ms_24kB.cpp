#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <cstring>

using namespace std;

int tim, tot;

vector <string> v[205];
map <string, int> mp;
bool found = false;

void rec(int idx, string inq) {
    for(int a1 = 0; a1 < v[idx].size(); a1++) {
        if(found == true) return;
        if(v[idx][a1] == inq) {
            found = true;
            return;
        }
        else if(mp[v[idx][a1]] != 0) rec(mp[v[idx][a1]], inq);
    }
}

int main() {
	int n, m;
	int cnt = 1;
	char a[100], b[100];
	string x, y;
	
	cin >> n >> m;
	
	for(int a1 = 0; a1 < n; a1++) {
	    scanf("%s are worse than %s", a, b);
	    if(mp[b] == 0) {
	        mp[b] = cnt;
	        cnt++;
	    }
	    v[mp[b]].push_back(a);
	}
	
	while(m--) {
	    scanf("%s are worse than %s", a, b);
	    found = false;
	    if(mp[a] != 0) {
	        rec(mp[a], b);
	        if(found == 1)
	        printf("Alternative Fact\n");
	        else {
    	       rec(mp[b], a);
    	        if(found == 1)
    	        printf("Fact\n");
	            else printf("Pants on Fire\n");
	        }
	    }
	    else if(mp[b] != 0) {
	        rec(mp[b], a);
	        if(found == 1)
	        printf("Fact\n");
	        else {
	            printf("Pants on Fire\n");
	        }
	    }
	    else printf("Pants on Fire\n");
	}
}