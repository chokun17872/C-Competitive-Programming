/*
    TASK: Plane MH370
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
string a;
int main(){
	
	int q,n,m,i;
	scanf("%d",&q);
	while(q--){
		scanf("%d %d",&n,&m);
		while(m--){
			cin>>a;
			mp[a]=1;
		}
		printf((mp.size()==n)?"yes\n":"no\n");
		mp.clear();
	}
}
