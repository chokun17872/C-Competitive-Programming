/*
TASK: PT_Tree Subset
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
vector<long long> g[100100];
long long v[100100],dp[100100][2],mark[100100];
void dfs(long long now){
	mark[now] = 1;
	dp[now][1]=v[now];
	for(auto x:g[now]){
		if(mark[x]) continue;
		dfs(x);
		dp[now][0]+=max(dp[x][0],dp[x][1]);
		dp[now][1]+=dp[x][0];
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	long long n,st,en,q,i;
	cin >> q;
	while(q--){
		cin >> n;
		for(i=1 ; i<=n ; i++){
			cin >> v[i];
		}
		for(i=1 ; i<n ; i++){
			cin >> st >> en;
			g[st].push_back(en),g[en].push_back(st);
		}
		dfs(1);
		cout << max(dp[1][0],dp[1][1]) << endl;
		memset(v,0,sizeof v);
		memset(dp,0,sizeof dp);
		memset(mark,0,sizeof mark);
		for(i=1 ; i<=n ; i++)
			g[i].clear();
	}
	return 0;
}

