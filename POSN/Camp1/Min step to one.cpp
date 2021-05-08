/*
    TASK: Min step to one
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int dp [1001000];
int main(){	
	int q,n;
	for(int i=2 ; i<=1000000 ; i++){ //Precompute
		dp[i] = dp[i-1] + 1; // P=P-1
		if(i%2 == 0)
			dp[i] = min(dp[i],dp[i/2]+1);
		if(i%3 == 0)
			dp[i] = min(dp[i],dp[i/3]+1);	
	}
	scanf("%d",&q);	
	while(q--){
		scanf("%d",&n);
		printf("%d\n",dp[n]);		
	}
	
	return 0;
}
