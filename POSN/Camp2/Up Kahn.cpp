/*
TASK: Up Kahn
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
priority_queue<int> he;
int in[100100];
vector<int> g[100100],ans;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int q,n,m,i,r,s,u;
	cin >> q;
	while(q--){
		cin >> n >> m;
		while(m--){
			cin >> r >> s;
			in[s]++;
			g[r].push_back(s);
		}
		for(i=1 ; i<=n ; i++)
			if(in[i]==0)
				he.push(-i);
		while(!he.empty()){
			u=he.top()*-1; he.pop();
			ans.push_back(u);
			for(auto x: g[u]){
				in[x]--;
				if(in[x]==0)
					he.push(-x);
			}
		}		
		if(ans.size()==n){
			cout << "Yes";
			for(i=0 ; i<n ; i++)
				cout << ' ' << ans[i];
			cout << endl;		
		}
		else
			cout << "No" << endl;
		memset(in,0,sizeof in);
		ans.clear();
		for(i=1 ; i<=n ; i++)
			g[i].clear();	
	}
	return 0;
}

