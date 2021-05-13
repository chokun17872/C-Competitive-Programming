/*
TASK: RT_Rush TOI
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int d[310][310];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,i,j,k,m,s,e,w;
	cin >> n >> m;
	for(i=1 ; i<=n ; i++)
		for(j=1 ; j<=n ; j++)
			d[i][j]=1<<25;
	while(m--){
		cin >> s >> e >> w;
		d[s][e]=min(d[s][e],w);
	}	
	for(k=1 ; k<=n ; k++)
		for(i=1 ; i<=n ; i++)
			for(j=1 ; j<=n ; j++)
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
	for(i=1 ; i<=n ; i++){
		for(j=1 ; j<=n ; j++)
			if(d[i][j]==1<<25) cout << "0 ";
			else               cout << d[i][j] << ' ';
		cout << endl;	
	}					
	return 0;
}

