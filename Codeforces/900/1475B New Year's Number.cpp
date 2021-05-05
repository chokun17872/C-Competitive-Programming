/*
TASK: New Year's Number
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1000010];
int main(){
	
	int q,n;
	scanf("%d",&q);
	dp[2021]=dp[2020]=1;
	for(int i=4040 ; i<=1000000 ; i++){
		dp[i]=max(dp[i-2020],dp[i-2021]);
	}
	while(q--){
		scanf("%d",&n);
		if(dp[n]==1) printf("Yes\n");
		else 		 printf("No\n");
	}
	
	return 0;
}

