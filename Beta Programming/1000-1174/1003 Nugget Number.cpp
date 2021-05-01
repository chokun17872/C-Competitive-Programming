/*
TASK: Nugget Number
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp[110];
int main(){
	
	int n;
	scanf("%d",&n);
	if(n<6){
		printf("no");
		return 0;	
	} 
	dp[6]=1,dp[9]=1,dp[20]=1;
	for(int i=6 ; i<=100 ; i++){
		if(dp[i-6]==1) dp[i]=1;
		if(i>9 && dp[i-9]==1) dp[i]=1;
		if(i>20 && dp[i-20]==1) dp[i]=1;
	}

	for(int i=1 ; i<=n ; i++){
		if(dp[i]) printf("%d\n",i);
	}
	
	return 0;
}

