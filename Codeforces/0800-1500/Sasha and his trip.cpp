/*
TASK: Sasha and his trip
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1000];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,v,dis,fuel=0,price; // v=fulltank
	cin >> n >> v ;
	dis = n-1;
	for(int i=1 ; i<=n ; i++){
		if(i==1){
			if(dis>v) dp[1]=v,dis-=v;
			else dp[1]=dis,dis=0;
		}
		else{
			if(dis>0) dp[i]=dp[i-1]+i,dis--;
			else if(dis==0){
				dp[n]=dp[i-1]; break;
			}			
		}
	}
	cout << dp[n] << endl ;
	
	return 0;
}

