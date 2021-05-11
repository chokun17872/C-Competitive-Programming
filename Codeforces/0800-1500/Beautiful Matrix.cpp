/*
TASK: Beautiful Matrix
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[10][10];
int main(){
	
	int mi,mj,move,i,j;
	for(i=1 ; i<=5 ; i++)
		for(j=1 ; j<=5 ; j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]) mi=i,mj=j; 
		}
			
	move = abs(mi-3)+abs(mj-3); // distance in y-axis + x-axis
	printf("%d\n",move);	
		
	return 0;
}

