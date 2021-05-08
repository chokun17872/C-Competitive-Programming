/*
    TASK: Min step to one
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main(){
	int r,c,i,j,ans=0;
	char b;
	scanf("%d %d",&r,&c);
	for(int i=1 ; i<=r ; i++){
		for(int j=1 ; j<=c ; j++){
			scanf(" %c",&b);
			if(b=='#') dp[i][j] = 0;
			else{
				dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1])) + 1;
				ans = max(ans,dp[i][j]);
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
