/*
TASK: Tigger
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010],a[1010],n;
int play(int now,int last){
	if(now<1||now>n) return 1e9;
	if(dp[now][last]) return dp[now][last];
	if(now==n) return a[now];
	return dp[now][last] = a[now]+min(play(now+last+1,last+1), play(now-last,last));
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i=1 ; i<=n ; i++)
		cin >> a[i];
	cout << play(2,1) << endl;	
	return 0;
}

