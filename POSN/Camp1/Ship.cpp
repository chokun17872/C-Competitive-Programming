/*
    TASK: Hero help
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int x[550],y[550];
int main(){
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++)
		scanf("%d %d",&x[i],&y[i]);
	sort(x+1,x+n+1);
	sort(y+1,y+n+1);
	for(int i=1 ; i<=n ; i++)
		ans += abs(x[i]-i) + abs(y[i]-i);
	printf("%d\n",ans);
	return 0;		
}
