/*
TASK: Alex and a Rhombus
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp[110];
int main(){
	
	int n;
	scanf("%d",&n);
	
	dp[1]=1;
	for(int i=2; i<=100 ; i++){
		dp[i]=dp[i-1]+(4*(i-1));
	}
	 
	printf("%d\n",dp[n]);
	return 0;
}

