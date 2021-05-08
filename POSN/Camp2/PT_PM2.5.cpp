/*
TASK: PT_PM2.5
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char mp[1101][1101];
int dist[1101][1101],di[5]={0,0,1,-1},dj[5]={1,-1,0,0};
queue<pair<int,int> > q;
void solve(){
	int r,c,i,j,d=-1,ans=0,ii,jj;
	scanf("%d %d",&r,&c);
	memset(dist,-1,sizeof(dist));
	for(i=1 ; i<=r ; i++){
		for(j=1 ; j<=c ; j++){
			scanf(" %c",&mp[i][j]);
			if(mp[i][j]=='E')
				q.push(make_pair(i,j)),dist[i][j]=0;
		}
	}
	while(!q.empty()){
		pair<int,int> f=q.front(); q.pop();
		for(i=0 ; i<4 ; i++){
			ii=f.first+di[i],jj=f.second+dj[i];
			if(ii>0&&ii<=r&&jj>0&&jj<=c&&mp[ii][jj]!='#'&&dist[ii][jj]==-1){
				dist[ii][jj]=dist[f.first][f.second]+1;
				if(mp[ii][jj]=='S')
					d=dist[ii][jj];
				q.push(make_pair(ii,jj));	
			}
		}
	}
	for(i=1 ; i<=r ; i++)
		for(j=1 ; j<=c ; j++)
			if(dist[i][j]!=-1&&dist[i][j]<=d&&mp[i][j]>='0'&&mp[i][j]<='9')
				ans+=mp[i][j]-'0';
	if(d==-1) printf("-1\n");
	else      printf("%d\n",ans);		
}
int main(){

	int q;
	scanf("%d",&q);
	while(q--){
		solve();
	}
	return 0;
}

