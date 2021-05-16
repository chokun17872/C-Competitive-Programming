/*
TASK: Equipped
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp[300];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,k,p,i,w,r,m;
	cin >> n >> k;
	p=1<<k;
	for(i=1 ; i<=p ; i++)
		dp[i]=1<<30;
	while(n--){
		cin >> w;
		m=0;
		for(i=0 ; i<k ; i++){
			cin >> r;
			m*=2;
			if(r==1) m++;
		}
		for(i=0 ; i<=p ; i++)
			dp[i|m] = min(dp[i|m],dp[i]+w);
	}
	cout << dp[p-1] << endl;	
	return 0;
}

