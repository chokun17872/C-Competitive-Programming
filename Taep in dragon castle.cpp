/*
TASK: Taep in dragon castle
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp[30][30],a[30][30];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int q,r,c,k,p,i,j,sum;
	cin >> q;
	while(q--){
		cin >> r >> c >> k >> p;
		for(i=1 ; i<=r ; i++)
			for(j=1 ; j<=c ; j++)
				a[i][j]=1;
		while(--k){
			for(i=1 ; i<=r ; i++)
				for(j=1 ; j<=c ; j++)
					dp[i][j]=(a[i][j]+a[i][j-1]+a[i-1][j]+a[i][j+1]+a[i+1][j])%p;
			for(i=1 ; i<=r ; i++)
				for(j=1 ; j<=c ; j++)
					a[i][j]=dp[i][j];		
		}
		for(i=1,sum=0 ; i<=r ; i++)
			for(j=1 ; j<=c ; j++)
				sum+=a[i][j],sum%=p;
		cout << sum << endl;
		memset(a,0,sizeof a);
		memset(dp,0,sizeof dp);				
	}
	return 0;
}

