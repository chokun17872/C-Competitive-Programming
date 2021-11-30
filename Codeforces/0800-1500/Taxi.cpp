/*
TAKS:
AUTHOR: passa-
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
 
    cin >> n;
	for(int i=0 ; i<n ; i++){
	 	cin >> num;
		if(num == 1) a++;
		else if(num == 2) b++;
		else if(num == 3) c++;
		else d++;
	}
	 
	cnt += d;
	
	cnt += c;
	a -= c;	 
	if(a < 0) a = 0;
	 
	cnt += b/2;
	if(b%2 != 0){
		cnt++;
		a-=2;
		if(a < 0) a = 0;
	}
	
	cnt += a/4;
	if(a%4 != 0) cnt++;
	 
	cout << cnt;
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

