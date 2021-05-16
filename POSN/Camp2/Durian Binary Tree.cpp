/*
TASK: Durian Binary Tree
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v[105];
int p[105];
int mic[105][105];
vector<int> child[105];
void dfs(int now){
	for(auto x:v[now]){
		if(p[x.first]==-1){
			p[x.first]=x.second;
			child[now].push_back(x.first);
			dfs(x.first);
		}
	}
}
int play(int now,int k){
	if(mic[now][k]!=-1) return mic[now][k];
	if(k==0) return 0;
	if(child[now].size()==0) return p[now];
	if(child[now].size()==1)
		return mic[now][k] = play(child[now][0],k-1) + p[now];
	int mx=-1;
	for(int i=0 ; i<=k-1 ; i++){
		mx = max(mx,play(child[now][0],i) + play(child[now][1],k-1-i) + p[now]);
	}	
	return mic[now][k] = mx; 
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,k,s,e,val;
	memset(p,-1,sizeof p);
	memset(mic,-1,sizeof mic);
	cin >> n >> k;
	for(int i=1 ; i<n ; i++){
		cin >> s >> e >> val;
		v[s].push_back({e,val});
		v[e].push_back({s,val});
	}
	p[1]=0;
	dfs(1);
	cout << play(1,k+1) << endl;
	return 0;
}

