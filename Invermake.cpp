/*
TASK: Invermake
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
#define mod 1000000007
int dp[1010][10100];
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,d,i,j;
	cin >> n >>d;
	dp[1][0]=1;
	for(j=1 ; j<=d ; j++)
		dp[1][j]=1;
	for(i=2 ; i<=n ; i++){
		dp[i][0]=dp[i-1][0];
		for(j=1 ; j<=d ; j++){
			dp[i][j]=dp[i][j-1]+dp[i-1][j];
			if(j-i>=0) dp[i][j]-=dp[i-1][j-i];
			dp[i][j]%=mod; dp[i][j]+=mod; dp[i][j]%=mod;
		}
	}	
	cout << (dp[n][d]-dp[n][d-1]+mod)%mod << endl;
	return 0;
}

