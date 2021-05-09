/*
TASK: Cable Car TOI12
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int v,w;
	bool operator < (const A& o)const{
		return w < o.w;
	}
};
A now;
priority_queue<A> heap;
vector<A> g[2510];
int dis[2510];
int main(){

	int n,m,u,v,w;
	scanf("%d %d",&n,&m);
	while(m--){
		scanf("%d %d %d",&u,&v,&w);
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	scanf("%d %d %d",&u,&v,&w);
	dis[u] = 1e9;
	heap.push({u,(int )1e9});
	while(!heap.empty()){
		now=heap.top();
		heap.pop();
		if(now.v == v){
			printf("%d\n", (int )ceil((double )w/(now.w-1)));
			break;
		}
		for(auto x:g[now.v]){
			if(dis[x.v]>=min(now.w,x.w)) continue;
			dis[x.v] = min(now.w,x.w);
			heap.push({x.v,dis[x.v]});
		}
	}
	return 0;
}

