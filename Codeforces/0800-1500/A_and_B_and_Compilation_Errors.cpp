/*
TAKS: A and B and Compilation Errors
AUTHOR: passa-
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int n,ans1,ans2;
int a[100100],b[100100],c[100100];
int main(){
	
	cin >> n;
	
	for(int i=0 ; i<n ; i++) cin >> a[i];
	for(int i=0 ; i<n-1 ; i++) cin >> b[i];
	for(int i=0 ; i<n-2 ; i++) cin >> c[i];
	
	sort(a,a+n);
	sort(b,b+n-1);
	sort(c,c+n-2);
	
	for(int i=0 ; i<n ; i++){
		if(a[i] != b[i]){
			ans1 = a[i];
			break;
		}
	}
	
	for(int i=0 ; i<n-1 ; i++){
		if(b[i] != c[i]){
			ans2 = b[i];
			break;
		}
	}
	
	cout << ans1 << endl << ans2;
	return 0;
	
}
/*
#Case:1
5
1 5 8 123 7
123 7 5 1
5 1 7
-----------------
8
123

#Case:2
6
1 4 3 3 5 7
3 7 5 4 3
4 3 7 5
-----------------
1
3

#Case:3

-----------------

#Case:4

-----------------

*/

