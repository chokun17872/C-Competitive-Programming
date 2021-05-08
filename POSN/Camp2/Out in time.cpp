/*
TASK: Out in time
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int i,j,w;
};
pair<int,int> p[35][35];
A now;
queue<A> que;
char a[35][35];
int dir[2][4]={{1,-1,0,0},{0,0,-1,1}},mark[35][35];
int main(){

	int q,n,m,c,sti,stj,eni,enj;
	scanf("%d",&q);
	while(q--){
		int value=1e9;
		memset(mark,0,sizeof mark);
		scanf("%d %d %d",&n,&m,&c);
		for(int i=1 ; i<=n ; i++)
			for(int j=1 ; j<=m ; j++)
				scanf(" %c",&a[i][j]);
		scanf("%d %d %d %d",&sti,&stj,&eni,&enj);
		que.push({sti,stj,0});
		while(!que.empty()){
			now=que.front(); que.pop();
			if(now.i==eni && now.j==enj)
				value=min(now.w,value);
			for(int k=0 ; k<4 ; k++){
				int ni=now.i+dir[0][k],nj=now.j+dir[1][k];
				if(ni<1 || nj<1 || ni>n || nj>m) continue;
				if(a[ni][nj]=='#' || mark[ni][nj]==1) continue;
				mark[ni][nj]=1;
				que.push({ni,nj,now.w+1});
			}	
		}
		int cnt=0,left=c-value;
		for(int i=1 ; i<=n ; i++)
			for(int j=1 ; j<=m ; j++)
				if(mark[i][j]==1) cnt++;
		if(value>c){
			printf("-1\n"); continue;
		}
		else if((cnt-value-1)*2<=left) printf("%d\n",cnt);
		else printf("%d\n",value+1+(left/2));					
	}
	return 0;
}

