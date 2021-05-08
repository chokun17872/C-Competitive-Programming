/*
    TASK: Lift
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int dp[45010];
int main(){
	
	int n,sum=0,num,ans1,ans2,mn=1e9;
	scanf("%d",&n);
	dp[0]=1;
	for(int i=0 ; i<n ; i++){
		scanf("%d",&num);
		sum += num;
		for(int j=45000 ; j>=num ; j--)
			if(dp[j-num]==1)
				dp[j] = 1;
	}
	for(int i=0 ; i<=sum/2 ; i++){
	if(dp[i]){
			if(abs(sum-2*i)<mn){
				mn = abs(sum-2*i);
				ans1=i, ans2=sum-i;
			}
		}	
	}
	if(ans1 > ans2)
		swap(ans1,ans2);
	printf("%d %d",ans1,ans2);	
	return 0;
}
