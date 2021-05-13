/*
TASK: Turbo Programming
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int v,w;
	bool operator < (const A& o)const{
		return w > o.w;
	}
};
priority_queue<A> dijk;
vector<A> g[1010];
int dist[1010],mark[1010];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,m,q,u,v,w,nown,noww,i;
	cin >> n >> m >> q;
	while(m--){
		cin >> u >> v >> w;
		g[u].push_back({v,w});
	}
	for(i=1 ; i<=n ; i++)
		dist[i]=1<<30;
	dist[1]=0;
	dijk.push({1,0});
	while(!dijk.empty()){
		nown=dijk.top().v,noww=dijk.top().w;
		dijk.pop();
		mark[nown]=1;
		for(auto x:g[nown]){
			if(!mark[x.v]&&dist[nown]+x.w<dist[x.v]){
			dist[x.v]=dist[nown]+x.w;
			dijk.push({x.v,dist[x.v]});	
			}			
		}
	}
	while(q--){
		cin >> i;
		if(dist[i]==1<<30) cout << "-1" << endl;
		else cout << dist[i] << endl;
	}	
	return 0;
}

