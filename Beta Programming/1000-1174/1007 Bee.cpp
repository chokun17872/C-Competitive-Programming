/*
TASK: Bee
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dp_w[50],dp_a[50];
int main(){
	
	int n=1;
	
	dp_w[1]=2,dp_a[1]=4;
	for(int i=2 ; i<=24 ; i++){
		dp_w[i]=dp_a[i-1];
		dp_a[i]=dp_w[i]+dp_w[i-1]+1;
	}
	
	while(1){
		scanf("%d",&n);
		if(n==-1) return 0;
		printf("%d %d\n",dp_w[n],dp_a[n]);
	}
	
	return 0;
}

