/*
    TASK: Fluctuate
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int mn=1e9,n,i,ans=0,now;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		scanf("%d",&now);
		ans = max(ans,now-mn);
		mn = min(now,mn);
	}
	printf("%d",ans);
	return 0;
		
}
