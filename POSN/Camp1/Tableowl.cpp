/*
    TASK: Slip triangle
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int dp[550][550];

int main(){
	
	int n,m,i,j,ans=1e9;
	scanf("%d %d",&n,&m);
	for(int i=0 ; i<=n+1 ; i++){
		for(int j=0 ; j<=m+1 ; j++)
			dp[i][j]=1e9;
	}
	for(int i=1 ; i<=n ; i++)
		for(int j=1 ; j<=m ; j++)
			scanf("%d",&dp[i][j]);
	for(int i=n-1 ; i>=1 ; i--)
		for(int j=1 ; j<=m ; j++)
			dp[i][j] += min(dp[i+1][j],min(dp[i+1][j-1],dp[i+1][j+1]));
	for(int j=1 ; j<=m ; j++)
		ans = min(ans,dp[1][j]);
	printf("%d\n",ans);
	return 0;			
					
}
