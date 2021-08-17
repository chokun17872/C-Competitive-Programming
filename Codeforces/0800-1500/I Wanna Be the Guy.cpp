/*
TASK: I Wanna Be the Guy
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int x[110],y[110],a[110];
int main(){
	int n,p,q;
	scanf("%d %d",&n,&p);
	for(int i=0 ; i<p ; i++){
		scanf("%d",&x[i]);
		a[x[i]]=1;
	}
	scanf("%d",&q);
	for(int i=0 ; i<q ; i++){
		scanf("%d",&y[i]);
		a[y[i]]=1;
	}
	for(int i=1 ; i<=n ; i++){
		if(a[i]==0){
			printf("Oh, my keyboard!");	
			return 0;
		}	
	}
	
	printf("I become the guy.");
	return 0;
	
}
/*
4
3 1 2 3
2 2 4

4
3 1 2 3
2 2 3
*/
