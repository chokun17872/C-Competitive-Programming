/*
TASK: Robot TOI13
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int i,j,w;
};
A now;
queue<A> que;
char a[5010][5010];
int dir[2][4]={{1,-1,0,0},{0,0,-1,1}};
int main(){
	
	int n,m,ans=0,cnt=0;
	scanf("%d %d",&n,&m);
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			scanf(" %c",&a[i][j]);
			if(a[i][j]=='X') que.push({i,j,0});
		}
	}
	while(!que.empty()){
		now=que.front(); que.pop();
		if(a[now.i][now.j]=='A'){
			a[now.i][now.j]='W';
			ans+=(now.w*2); cnt++;	
		}
		for(int k=0 ; k<4 ; k++){
			int ni=now.i+dir[0][k],nj=now.j+dir[1][k];
			if(ni<1 || nj<1 || ni>n || nj>m) continue;
			if(a[ni][nj]=='W') continue;
			if(a[ni][nj]!='A') a[ni][nj]='W';
			que.push({ni,nj,now.w+1});
		}	
	}
	printf("%d %d\n",cnt,ans);
	return 0;
}

