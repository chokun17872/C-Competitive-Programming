/*
TASK: Food
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[10],b[10],mark[10],ans[10];
void permute(int st){
	if(st==n){
		for(int i=1 ; i<=n ; i++)
			printf("%d ",ans[i]);
		printf("\n");
		return ;	
	}
	for(int i=1 ; i<=n ; i++){
		if(!mark[i]){
			mark[i]=1;
			ans[st+1]=i; // start keep ans at second index
			permute(st+1);
			mark[i]=0;
		}
	}
}
int main(){
		
	scanf("%d %d",&n,&m);
	for(int i=1 ; i<=m ; i++){
		scanf("%d",&b[i]);
		a[b[i]]=1; // mark danger food
	}
	
	for(int i=1 ; i<=n ; i++){
		if(!a[i]){ // play if not danger food
			ans[1]=i; // first index = start food
			mark[i]=1; 
			permute(1); // start at first state
			mark[i]=0;	
		}  
	}
		
	return 0;
}

