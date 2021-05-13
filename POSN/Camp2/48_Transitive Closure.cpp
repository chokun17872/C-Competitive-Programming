/*
TASK: 48_Transitive Closure
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int d[510][510];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,i,j,k;
	cin >> n;
	for(i=1 ; i<=n ; i++)
		for(j=1 ; j<=n ; j++)
			cin >> d[i][j];
	for(k=1 ; k<=n ; k++)
		for(i=1 ; i<=n ; i++)
			for(j=1 ; j<=n ; j++)
				d[i][j]|=(d[i][k]&d[k][j]);
	for(i=1 ; i<=n ; i++){
		for(j=1 ; j<=n ; j++)
			cout << d[i][j] << ' ';
		cout << endl;		
	}					
	return 0;
}

