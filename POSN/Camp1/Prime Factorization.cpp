/*
    TASK: Prime Factorization
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int ans[100];
int main(){
	int q,n,sq,i,cnt;
	scanf("%d",&q);
	while(q--){
		scanf("%d",&n);
		sq = sqrt(n);
		for(i=2,cnt=0 ; i<=sq ; i++){
			if(!(n%i)){
				while(!(n%i))
					ans[cnt]=i,n/=i,cnt++;
			}
		}
		if(n!=1)
			ans[cnt]=n, cnt++;
		for(i=0 ; i<cnt-1 ; i++)
			printf("%d x ",ans[i]);
		printf("%d\n",ans[i]);
		memset(ans,0,sizeof ans);	
	}
	return 0;
}
