/*
TASK: Electricity
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
priority_queue< PII > he; // heap
int dp[500100];
int main(){
	
	int n,k,i,a;
	scanf("%d %d %d",&n,&k,&a);
	dp[1]=a;
	he.push(make_pair(-a,1));
	for(i=2 ; i<=n ; i++){
		scanf("%d",&a);
		while(!he.empty() && i - he.top().second > k)
			he.pop();
		dp[i] = he.top().first*-1 + a;
		he.push(make_pair(dp[i]*-1,i));	
	}
	printf("%d\n",dp[n]);
	return 0;
}

