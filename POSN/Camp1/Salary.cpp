/*
    TASK:
    LANG: CPP
    AUTHOR: Pooripat Apirukchotima
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int sum[100100];
void dfs(int u){
	for(auto x: g[u]){
		sum[x] += sum[u];
		dfs(x);
	} 
}
int main(){
	int n,m,i,a,b;
	scanf("%d %d",&n,&m);
	for(i=0 ; i<n-1 ; i++){
		scanf("%d %d",&a,&b);
		g[b].push_back(a);
	}
	while(m--){
		scanf("%d %d",&a,&b);
		sum[a] += b;
	}
	dfs(1);
	for(i=1 ; i<=n ; i++)
		printf("%d\n",sum[i]);
	return 0;		
}
