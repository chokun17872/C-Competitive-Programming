/*
    TASK: Rank
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
int a[200100];
int main(){
	
	int n,m,b,i;
	scanf("%d %d",&n,&m);
	
	for(int i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	while(m--){
		scanf("%d",&b);
		i = upper_bound(a,a+n,b) - a;
		printf("%d\n",n+1-i);
	}
	
	return 0;
	
}
