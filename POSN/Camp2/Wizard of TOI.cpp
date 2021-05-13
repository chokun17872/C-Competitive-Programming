/*
TASK: Wizard of TOI
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
#define hashsize 5000011
int hashtable[hashsize],keep[2][hashsize],xt,yt;
int x[4][1510],y[4][1510],i,j,r,s,t,n,p,q;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	cin >> xt >> yt >> n;
	for(i=0 ; i<4 ; i++)
		for(j=0 ; j<n ; j++)
			cin >> x[i][j] >> y[i][j];
	for(i=0 ; i<n ; i++){	 //Din
		for(j=0 ; j<n ; j++){ //Nam
		 	r=x[0][i]+x[1][j],s=y[0][i]+y[1][j];
		 	t=((r+(3*s)%hashsize)%hashsize+hashsize)%hashsize; // hash fucntion
		 	while(hashtable[t]!=0){
		 		t++; t%=hashsize;
			 }
			 hashtable[t]=(1500*i)+j+1;
			 keep[0][t]=r, keep[1][t]=s;
		}
	}
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			r=xt-(x[2][i]+x[3][j]),s=yt-(y[2][i]+y[3][j]);
			t=((r+(3*s)%hashsize)%hashsize+hashsize)%hashsize; // hash function
			while(hashtable[t]!=0){
				if(keep[0][t]==r&&keep[1][t]==s){
					p=hashtable[t]-1;
					cout << x[0][p/1500] << ' ' << y[0][p/1500] << endl;
					cout << x[1][p%1500] << ' ' << y[1][p%1500] << endl;
					cout << x[2][i] << ' ' << y[2][i] << endl;
					cout << x[3][j] << ' ' << y[3][j] << endl;
					return 0;
				}
				t++; t%=hashsize;
			}
		}
	}
	return 0;
}

