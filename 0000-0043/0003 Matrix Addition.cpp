/*
TASK: Matrix Addition
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[1000][1000],b[1000][1000],c[1000][1000];
int main(){
	
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=0 ; i<n ; i++)
		for(int j=0 ; j<m ; j++)
			scanf("%d",&a[i][j]);
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}
	}
					
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++)
			printf("%d ",c[i][j]);
		printf("\n");	
	}
				
	return 0;
}

