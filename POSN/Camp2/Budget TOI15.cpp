/*
TASK: Budget TOI15
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
const int mxN = 3010, mxC=1e6+10, mxP=3e5+10;
struct MST{
	int u,v,w;
	bool operator < (const MST& o)const{
		return w > o.w;
	}
};
int min_cost[mxC], mk[mxP], p[mxN];
priority_queue<MST> pq;
int fr(int i){
	if(p[i]==i)
	return i;
	return p[i]=fr(p[i]);
}
int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,P,mx=-2e9;
	cin >> n >> m;
	for(int i=0 ; i<n ; i++) p[i]=i;
	while(m--){
		int u,v,w,t;
		cin >> u >> v >> w >> t;
		if(t) p[fr(u)]=fr(v);
		else pq.push({u,v,w});
	}
	for(int i=0 ; i<mxC ; i++) min_cost[i]=1e9;
	cin >> P;
	for(int i=0 ; i<P ; i++){
		int l,v;
		cin >> l >> v;
		min_cost[l]=min(min_cost[l], v), mx=max(mx, l);
	}
	for(int i=mx ; i>=1 ; i--){
		min_cost[i]=min(min_cost[i], min_cost[i+1]);
	}
	int ans=0ll;
	while(!pq.empty()){
		int u = fr(pq.top().u), v = fr(pq.top().v), w = pq.top().w; pq.pop();
		if(u!=v){
			ans+=min_cost[w];
			p[u]=v;
		}
	}
	cout << ans << "\n";
	return 0;
}
	

