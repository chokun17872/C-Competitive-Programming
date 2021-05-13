/*
TASK: MAP
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int a,i,j;
	bool operator < (const A& o)const{
		if(i==o.i)
			return j < o.j;
		return i > o.i;	
	}
};
queue <int> bfs;
vector <pair<int,pair<int,int>>> g[50000];
A cc[50000];
int mark[50000],di[4]={0,0,-1,1},dj[4]={1,-1,0,0};
int dir (char d){
	if(d=='U') return 3;
	if(d=='L') return 1;
	return -1;
}
int main(){

	int n,m,i,j,k,p,a,b,f,node;
	char c;
	cin >> n >> m ;
	p=n*m-1;
	for(i=0 ; i<=p ; i++)
		cc[i].a=i;
	for(i=0 ; i<p ; i++){
		cin >> a >> c >> b ;
		f = dir(c);
		g[b].push_back({a, {di[f], dj[f]}});
		g[a].push_back({b, {di[f-1], dj[f-1]}});
	}
	cc[0].i=0, cc[0].j=0;
	bfs.push(0);
	while(!bfs.empty()){
		node = bfs.front(); mark[node]=1;
		bfs.pop();
		for(auto x:g[node]){
			k=x.first;
			i=x.second.first, j=x.second.second;
			if(mark[k]) continue;
			cc[k].i=cc[node].i+i; cc[k].j=cc[node].j+j;
			bfs.push(k);
		}
	}
	sort(cc,cc+p+1);
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<m ; j++)
			cout << cc[i*m+j].a << " " ;
		cout << '\n' ;	
	}	
	return 0;
}

