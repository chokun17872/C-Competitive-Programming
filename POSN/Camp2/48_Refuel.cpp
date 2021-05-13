/*
TASK: 48_Refuel
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int v,w,f;
	bool operator < (const A& o)const{
		return w>o.w;
	}
};
vector<A> g[1100];
priority_queue<A> dijk;
int dis[1100][110],a[1100];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int q,n,m,u,v,w,c,s,e,i,j,f,mi;
	cin >> q;
	while(q--){
		cin >> n >> m;
		for(i=0 ; i<n ; i++)
			cin >> a[i];
		while(m--){
			cin >> u >> v >> w;
			g[u].push_back({v,w,0}),g[v].push_back({u,w,0});
		}
		cin >> c >> s >> e;
		for(i=0 ; i<=1000 ; i++)
			for(j=0 ; j<=100 ; j++)
				dis[i][j]=1<<30;
		dis[s][0]=0;
		dijk.push({s,0,0});
		while(!dijk.empty()){
			u=dijk.top().v,w=dijk.top().w,f=dijk.top().f; dijk.pop();
			if(u==e) break;
			if(f+1<=c && w+a[u]<dis[u][f+1]){
				dis[u][f+1] = w+a[u];
				dijk.push({u,dis[u][f+1],f+1});
			}
			for(auto x:g[u]){
				if(f>=x.w && w<dis[x.v][f-x.w]){
					dis[x.v][f-x.w]=w;
					dijk.push({x.v,w,f-x.w});
				}
			}
		}
		mi=1<<30;
		for(i=0 ; i<=c ; i++)
			mi=min(mi,dis[e][i]);
		if(mi==1<<30) cout << "-99" << endl;
		else		  cout << mi << endl;
		for(i=0 ; i<n ; i++) g[i].clear();
		while(!dijk.empty()) dijk.pop();				
	}
	return 0;
}

