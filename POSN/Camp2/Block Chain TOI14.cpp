/*
TASK: Block Chain TOI14
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
#define N 1005
using namespace std;
map< vector<pair < int,int > >, int > mp;
vector< pair< int,int > > g;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,q;
	cin >> n >> q;
	for(int i=1,sz ; i<=n ; i++){
		cin >> sz;
		for(int j=1,u,v ; j<sz ; j++) cin >> u >> v,g.push_back({min(u,v),max(u,v)});
		sort(g.begin(),g.end());
		++mp[g];
		g.clear();
	}
	for(int i=1,sz ; i<=q ; i++){
		cin >> sz;
		for(int j=1,u,v ; j<sz ; j++) cin >> u >> v,g.push_back({min(u,v),max(u,v)});
		sort(g.begin(),g.end());
		cout << mp[g] << endl;
		g.clear();
	}
	return 0;
}

