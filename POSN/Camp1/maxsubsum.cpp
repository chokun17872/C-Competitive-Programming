/*
    TASK: MaxSubSum
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;

int a[300000],dp[300000],start,end;
int main(){
	int n,i,sum=0,mx=-2000000000,s,st=1,e,num;
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++){
		scanf("%d",&num);
		sum+=num;
		if(sum > mx)
			mx = sum,s=st,e=i;
		if(sum<0)
			sum=0,st=i+1;	
	}
	printf("%d %d\n%d\n",s,e,mx);
	return 0;
}
