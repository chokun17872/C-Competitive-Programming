/*
TAKS: Fancy Fence
AUTHOR: passa-
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int t,a,ang=180;
int p[300];
int main(){
	
	cin >> t;
	
	for(int i=3 ; i<=1000 ; i++){ // loop angle's number of polygon
		if(ang % i == 0){
			p[ang/i] = 1;
		}
		ang += 180;
	}
	
	while(t--){
		cin >> a;
		if(p[a] == 1){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
	
	return 0;
}
/*
#Case:1
3
30
60
90
-----------------
NO
YES
YES

#Case:2

-----------------

#Case:3

-----------------

#Case:4

-----------------

*/

