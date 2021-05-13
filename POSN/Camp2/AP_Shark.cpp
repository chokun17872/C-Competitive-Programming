/*
TASK: AP_Shark
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> g[1010];
int w[1010],mark[1010],j;
long long sum,ma=-1e9;
void dfs(int u){
	if(mark[u]==j) return ;
	mark[u]=j;
	sum+=w[u];
	for(auto x:g[u])
		dfs(x);
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,m,i,ans=1,r,s;
	cin >> n >> m;
	for(i=1 ; i<=n ; i++)
		cin >> w[i];
	for(i=0 ; i<m ; i++){
		cin >> r >> s;
		g[r].push_back(s);
	}
	for(j=1 ; j<=n ; j++){
		sum=0;
		dfs(j);
		if(sum>ma)	
			ma=sum,ans=j;
	}
	cout << ans << ' ' << ma << endl;		
	return 0;
}

