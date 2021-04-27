/*
TASK: Max Sequence
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[5000],qs;
int main(){
	
	int n,s=0,e=0,ns,ne,mx=-1e9;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	
	for(int i=0 ; i<n ; i++){
		qs+=a[i];
		if(qs<0) qs=0,s=i+1; // if qs<0 we better put it out to reach max value and set next index to start
		if(qs>mx){
			ns = s; // startpoint when you found qs<0
			ne = i; // update endpoint
			mx = qs; // update max
		}
	} 

	if(mx<=0){
		printf("Empty sequence"); return 0;
	}
	for(int i=ns ; i<=ne ; i++)
		printf("%d ",a[i]);
	printf("\n%d",mx);
			
	return 0;
}

