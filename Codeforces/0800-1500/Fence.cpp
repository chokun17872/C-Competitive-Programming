/*
TAKS: Fence
AUTHOR: passa-
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int n,k,mn=2e9,ind;
int h[200000],qs[200000],mqs[200000];
int main(){
	
	cin >> n >> k;
	for(int i=0 ; i<n ; i++) cin >> h[i];
	
	qs[0] = h[0];
	for(int i=1 ; i<n ; i++){
		qs[i] = qs[i-1] + h[i];
	}
	
	mqs[0] = qs[k-1];
	for(int i=1 ; i<=n-k ; i++){
		mqs[i] = qs[k+i-1] - qs[i-1];
	}

	for(int i=0 ; i<=n-k ; i++){
		if(mqs[i] < mn){
			mn = mqs[i];
			ind = i;
		}
	}
	
	cout << ind+1;
	return 0;
}
/*
#Case:1
7 3
1 2 6 1 1 7 1
-----------------
3

#Case:2

-----------------

#Case:3

-----------------

#Case:4

-----------------

*/

