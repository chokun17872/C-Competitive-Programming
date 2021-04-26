/*
TASK: Brick
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[100][100];
int b[100];
int main(){

	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=0 ; i<n ; i++)
		for(int j=0 ; j<m ; j++)
			scanf(" %c",&a[i][j]);
	
	for(int i=0 ; i<m ; i++)
		scanf("%d",&b[i]);

	for(int i=0 ; i<m ; i++){
		if(a[0][i]=='O') continue; // if top is O skip to next column
		for(int j=0 ; j<n ; j++){			
			if(a[j+1][i]=='O' || j+1==n){ // find O or hit ground
				while(b[i]>0 && j>=0){ // print it back up until b[i]=0 and do not print over the box
					a[j][i]='#';
					b[i]--;
					j--;
				}
			break; // after print break and go stright to next column	
			}				
		}
	}
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++)
			printf("%c",a[i][j]);
		printf("\n");
	}
							
	return 0;
}
/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 3 2 0

8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
20 20 20 20 20

8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
0 0 0 0 0 

8 5
OOOOO
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 1 1 1
*/
