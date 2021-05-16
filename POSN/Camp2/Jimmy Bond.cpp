/*
TASK: Jimmy Bond
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
double pos[25][25],dp[25][1100000];
int n;
double play(int now,int bit){
	if(now==n) return 1;
	if(dp[now][bit]!=-1) return dp[now][bit];
	double ma=0;
	int i;
	for(i=0 ; i<n ; i++)
		if((bit&(1<<i))==0)
			ma=max(ma,pos[now][i]*play(now+1,bit|(1<<i)));
	return dp[now][bit]=ma;		
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int i,j;
	cin >> n;
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			cin >> pos[i][j];
			pos[i][j]/=100;
		}
	}
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<(1<<n) ; j++){
			dp[i][j]=-1;
		}
	}
	printf("%.2lf",play(0,0)*100);
	return 0;
}

