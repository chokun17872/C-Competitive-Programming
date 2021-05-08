/*
    TASK: Hero help
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int x[100100],y[100100];
int main(){
	int n,k,idx,ans;
	scanf("%d %d",&n,&k);
	for(int i=0 ; i<n ; i++)
		scanf("%d %d",&x[i],&y[i]);
	sort(x,x+n);
	sort(y,y+n);
	for(int i=0 ; i<n ; i++){
		idx = lower_bound(x,x+n,x[i]+k) - x;
		ans = max(ans, idx-i);
	}
	for(int i=0 ; i<n ; i++){
		idx = lower_bound(y,y+n,y[i]+k) - y;
		ans = max(ans, idx-i);
	}
	printf("%d\n",ans);
	return 0;
}
