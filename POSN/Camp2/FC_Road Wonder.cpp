/*
TASK: FC_Road Wonder
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
#define INF 2e9
struct A{
	int u,v,w;
};
A a[1111];
int dis[2000],temp[2000];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,m,k,t,cnt=0,i,s,j;
	cin >> n >> m >> k >> t;
	for(i=0 ; i<m ; i++)
		cin >> a[cnt].u >> a[cnt].v >> a[cnt].w, cnt++;
	for(i=0 ; i<k ; i++)
		cin >> a[cnt].u >> a[cnt].v >> a[cnt].w, a[cnt].w*=-1,cnt++;
	while(t--){
		cin >> s;
		for(i=1 ; i<=n ; i++)
			dis[i]=INF;
		dis[s]=0;
		for(i=0 ; i<n-1 ; i++)
			for(j=0 ; j<cnt ; j++)
				if(dis[a[j].u]!=INF && dis[a[j].u]+a[j].w<dis[a[j].v])
					dis[a[j].v] = dis[a[j].u]+a[j].w;
		for(i=1 ; i<=n ; i++)
			temp[i]=dis[i];
		for(j=0 ; j<cnt ; j++)
			if(dis[a[j].u]!=INF && dis[a[j].u]+a[j].w<dis[a[j].v])
				dis[a[j].v] = dis[a[j].u]+a[j].w;
		for(i=1 ; i<=n ; i++){
			if(dis[i]!=temp[i] || dis[i]==INF)
				cout << "-1" << ' ';
			else
				cout << dis[i] << ' ';	
		}						
		cout << endl;		
	}		
	return 0;
}

