/*
    TASK: Velvet sell
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
	
	int n,q,w;
	scanf("%d %d",&n,&q);
	
	for(int i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	while(q--){
		scanf("%d",&w);
		printf("%d\n",lower_bound(a,a+n,w)-a);
	}
	return 0;
}
