/*
TASK: Next round
Author: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main(){

	int n,k,cnt=0;
	scanf("%d %d",&n,&k);
	
	for(int i=1 ; i<=n ; i++)
		scanf("%d",&a[i]);
	for(int i=1 ; i<=n ; i++){
		if(a[i]>=a[k]&&a[i]) cnt++; 
	}
	
	printf("%d\n",cnt);
	return 0;		
}
