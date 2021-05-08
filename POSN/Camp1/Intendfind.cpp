/*
    TASK: Intendfind
    LANG: CPP
    AUTHOR: PeaTT~
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
	
	int n,q,k;
	scanf("%d %d",&n,&q);
	
	for(int i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	while(q--){
		scanf("%d",&k);
		printf("%d\n",upper_bound(a,a+n,k)-a);
	}
	return 0;
}
