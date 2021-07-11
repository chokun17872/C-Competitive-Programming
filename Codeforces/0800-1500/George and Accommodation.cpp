/*
TASK: George and Accommodation
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q,cnt=0;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		scanf("%d %d",&p,&q);
		if(p<q-1) cnt++;
	}
	printf("%d\n",cnt);
	
	return 0;
}


