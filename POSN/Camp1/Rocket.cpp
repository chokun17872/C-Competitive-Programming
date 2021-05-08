/*
    TASK: Rocket
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int x[50010],y[50010];

int main(){
	int n,m,i,j,num,ans=0;
	scanf("%d %d",&n,&m);
	for(int i=0 ; i<n ; i++)
		scanf("%d %d",&x[i],&y[i]);
	sort(x,x+n);
	sort(y,y+n);
	while(m--){
		scanf("%d",&num);
		i = lower_bound(x,x+n,num) - x;
		j = upper_bound(y,y+n,num) - y;
		ans += i-j;
		ans %= 2007;
	}
	printf("%d\n",ans);
	return 0;	
}
