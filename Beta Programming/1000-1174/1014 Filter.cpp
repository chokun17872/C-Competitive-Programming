/*
TASK:
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int fil[1000][10],win[10000];
int main(){
	
	int w,h,n,start,end,nocover=0,halfcover=0,area_nocover,area_halfcover;
	scanf("%d %d %d",&w,&h,&n);
	
	for(int i=0 ; i<n ; i++)
		scanf("%d %d",&fil[i][0],&fil[i][1]);
	
	for(int i=0 ; i<n ; i++){
		start = fil[i][0],end = start+fil[i][1];
		for(int j=start ; j<end&&j<w ; j++)
			win[j]++;		
	}
	
	for(int i=0 ; i<w ; i++){
		if(win[i]==0) nocover++;
		if(win[i]==1) halfcover++;
	}
		
	area_nocover = h*nocover;
	area_halfcover = h*halfcover;
	
	printf("%d %d\n",area_nocover,area_halfcover);
	return 0;
}

