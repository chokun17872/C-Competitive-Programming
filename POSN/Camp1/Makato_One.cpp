/*
    TASK: Makato_one
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
	
	int n,q,num,r,s,i;
	scanf("%d %d",&n,&q);
	for(int i=1 ; i<=n ; i++){
		scanf("%d",&num);
		a[i] = a[i-1]^num;
	}
	while(q--){
		scanf("%d %d",&r,&s);
		printf("%d\n",a[s]^a[r-1]);
	}
	return 0;
}
