/*
    TASK: FC_Stock
    LANG: C
    AUTHOR: Pooripat Apirukchotima
    SCHOOL: CRU
*/
#include<stdio.h>
int dp[1000100],a[1000100];
int main(){
	int n,q,r,s,i;
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++){
		scanf("%d",&a[i]);
		dp[i] += dp[i-1];
		if(a[i] > a[i-1])
			dp[i] += a[i]-a[i-1];
	}
	scanf("%d",&q);
	while(q--){
		scanf("%d %d",&r,&s);
		printf("%d\n",dp[s]-dp[r]);	
	}
	return 0;
}
