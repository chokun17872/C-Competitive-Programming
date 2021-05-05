/*
TASK: The Cake Is a Lie
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp[110][110];
int main(){

	int q,n,m,k;
	scanf("%d",&q);

	for(int i=1 ; i<=100 ; i++){
		dp[i][1]=i-1;
		for(int j=2 ; j<=100 ; j++){
			dp[i][j]=dp[i][j-1]+i;	
		}
	}
		
	while(q--){
		scanf("%d %d %d",&n,&m,&k);
		if(dp[n][m]==k) printf("Yes\n");
		else			printf("No\n");
	}
		
	return 0;
}

