/*
TASK: Napoleon Cake // Algo guide from Roam in programming tech 2
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp[200010],a[200010];
int main(){
	
	int q,n;
	scanf("%d",&q);
	while(q--){
		scanf("%d",&n);
		for(int i=1 ; i<=n ; i++){
			scanf("%d",&a[i]);
			if(a[i]){
				if(a[i]>i) a[i]=i;
				dp[i]++; dp[i-a[i]]--;	
			}			
		}
		for(int i=n ; i>=1 ; i--){
			dp[i]+=dp[i+1];
		}
		for(int i=1 ; i<=n ; i++){
			if(dp[i]) printf("1 ");
			else 	  printf("0 ");
		}
		printf("\n");
		memset(dp,0,sizeof dp);
		memset(a,0,sizeof a);
	}
	
	return 0;
}

