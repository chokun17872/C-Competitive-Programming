/*
    TASK: Influenza
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int a[100010],b[100010];
int main(){
	int n,ans=0;
	scanf("%d",&n);
	
	for(int i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	
	for(int i=0 ; i<n ; i++){
		scanf("%d",&b[i]);
	}
	sort(b,b+n,greater<int>());
	
	for(int i=0 ; i<n ; i++){
		ans = max(ans,min(a[i],b[i]));
	}
	printf("%d\n",ans);
	return 0;
	
}
