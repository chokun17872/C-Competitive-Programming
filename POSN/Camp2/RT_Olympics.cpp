/*
TASK: RT_Olypics
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[30],ch,mark[60],n,m,p;
void play(int st,int fin){
	int i,j;
	if(ch==1) return;
	if(st==m+1){
		ch=1;
		return ;
	}
	if(st==m){
		if(mark[n]==1) return;
		a[st]=n;
		mark[a[st]+p]=1;
		play(st+1,n);
		mark[a[st]+p]=0;
		return ;
	}
	for(i=fin+1 ; i<=n-(m-st) ; i++){
		if(mark[i]==1) continue;
		a[st]=i;
		mark[a[st]+p]=1;
		play(st+1,i);
		mark[a[st]+p]=0;
		if(ch==1) return;
	}
}
int main(){
	
	int q;
	cin >> q ;
	while(q--){
		cin >> n >> m >> p ;
		memset(a,0,sizeof a);
		memset(mark,0,sizeof mark);
		mark[p]=1;
		ch=0;
		play(1,0);
		if(ch==1) cout << "no" << endl ;
		else cout << "yes" << endl ;
	}
	return 0;
}

