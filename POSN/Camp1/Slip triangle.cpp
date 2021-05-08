/*
    TASK: Slip triangle
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main(){
	
	int n,i,j;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<=i ; j++)
			scanf("%d",&dp[i][j]);
	}
	for(int i=n-2 ; i>=0 ; i--){
		for(int j=0 ; j<=i ; j++)
			dp[i][j] += max(dp[i+1][j],dp[i+1][j+1]);
	}
	printf("%d\n",dp[0][0]);
	return 0;
}
