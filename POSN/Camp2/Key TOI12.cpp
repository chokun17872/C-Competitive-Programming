/*
TASK: Key TOI12
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
#define N 1005
using namespace std;
char str1[N],str2[N],ip[N+N];
int dp[N][N];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,m,q;
	cin >> str1+1 >> str2+1 >> q;
	n=strlen(str1+1),m=strlen(str2+1);
	while(q--){
		cin >> ip+1;
		for(int i=0 ; i<=n ; i++){
			for(int j=0 ; j<=m ; j++){
				dp[i][j]=0;
				if(!i&&!j) continue;
				if(dp[i-1][j]==i+j-1&&str1[i]==ip[i+j]) dp[i][j]=i+j;
				if(dp[i][j-1]==i+j-1&&str2[j]==ip[i+j]) dp[i][j]=i+j;
			}
		}
		printf((dp[n][m]==n+m)?"Yes\n":"No\n");
	}
	return 0;
}

