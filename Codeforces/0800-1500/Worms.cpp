/*
TAKS: Worms
AUTHOR: passa-
LANG: C++
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int n,m,en,pile_count;
int a[1000010],q[100010],pile[1000010];
int main(){
	
	cin >> n;
	for(int i=1 ; i<=n ; i++) cin >> a[i];
	
	cin >> m;
	for(int i=0 ; i<m ; i++) cin >> q[i];

	en = a[1]; pile_count = 1;

	for(int i=1 ; i<=1000000 ; i++){
		if(i == en+1){		
			pile_count++;
			en += a[pile_count];
		//	cout << en << endl;		
		}
		pile[i] = pile_count;
	}
	
	for(int i=0 ; i<m ; i++) cout << pile[q[i]] << endl;

	return 0;
	
}
/*

#Case:1
5
2 7 3 4 9
3
1 25 11

1
5
3

*/
