/*
TAKS: Xenia and Ringroad
AUTHOR: passa-
LANG: C++
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
long long n,m,ans,now=1;
long a[100100];
int main(){
	
	cin >> n >> m;
	for(int i=0 ; i<m ; i++) cin >> a[i];
	
	for(int i=0 ; i<m ; i++){
		if(a[i] < now){
			ans += n - (now - a[i]);
		}
		else ans += a[i] - now;
		now = a[i];
	}
	
	cout << ans;
	return 0;
}
/*
#Case:1
4 3
3 2 3
--------
6

#Case:2
4 3
2 3 3
--------
2
*/

