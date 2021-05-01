/*
TASK: Skyline
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[5000][10],sky[5000];
int main(){
	
	int n,start,end,final=-1,height=0;
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++)
		scanf("%d %d %d",&a[i][1],&a[i][2],&a[i][3]);
		
	
	for(int i=1 ; i<=n ; i++){
		start = a[i][1]+1,end = a[i][3]; // if start from 1-3 means mark 2-3 that's why we plus 1
		final = max(end,final);
		for(int j=start ; j<=end ; j++){
			if(a[i][2]>sky[j]) sky[j]=a[i][2]; // set to tallest building height atm
		}
	}

	for(int i=1 ; i<=final+1 ; i++){
		if(height!=sky[i]){
			printf("%d %d ",i-1,sky[i]); // if found changed print before pos
			height=sky[i];
		}
	}
			
	return 0;
}

