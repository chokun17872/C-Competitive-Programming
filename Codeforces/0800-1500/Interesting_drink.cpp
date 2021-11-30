/*
TAKS: Interesting_drink
AUTHOR: passa-
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int n,num,a,b,c,d,cnt;
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int n,num,a,b,c,d,cnt;
int main(){
 
    cin >> n;
	for(int i=0 ; i<n ; i++) cin >> x[i];
	 
	sort(x,x+n);
	 
	cin >> q;
	 
	while(q--){
		cin >> m;
		ans = upper_bound(x, x+n, m) - x;
		cout << ans << endl;
	}
	 
    return 0;
 
}
/*
#Case:1

-----------------

#Case:2

-----------------

#Case:3

-----------------

#Case:4

-----------------

*/

