/*
TAKS: 1352B
AUTHOR: passa-
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int ans,num,t,n;
int main(){
	
	cin >> t;
	while(t--){
		cin >> ans >> num;
		
		if(ans%2 == 0 && num%2 == 1){
			if(num*2 <= ans){
				cout << "YES\n";
				for(int i=0 ; i<num-1 ; i++){
					cout << "2 ";
					ans -= 2;
				}
				cout << ans << endl;	
			}
			else cout << "NO\n";
		}
		else if(ans%2 == 1 && num%2 == 0){
			cout << "NO\n";
		}
		else if(ans%2 == 0 && num%2 == 0){
			if(num*2 <= ans){
				cout << "YES\n";
				for(int i=0 ; i<num-1 ; i++){
					cout << "2 ";
					ans -= 2;
				}
				cout << ans << endl;	
			}
			else if((ans-(num-1))%2 == 1){
				cout << "YES\n";
				n = num-1;
				for(int i=0 ; i<n ; i++){
					cout << "1 ";
					ans--;
				}
				cout << ans << endl;
			}
			else cout << "NO\n";	
		}
		else if(ans%2 ==1 && num%2 == 1){
			if((ans-(num-1))%2 == 1){
				cout << "YES\n";
				n = num-1;
				for(int i=0 ; i<n ; i++){
					cout << "1 ";
					ans--;
				}
				cout << ans << endl;
			}
			else cout << "NO\n";
		}
	}
}
/*
#Case:1
8
10 3
100 4
8 7
97 2
8 8
3 10
5 3
1000000000 9
-----------------
YES
4 2 4
YES
55 5 5 35
NO
NO
YES
1 1 1 1 1 1 1 1
NO
YES
3 1 1
YES
111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111120

#Case:2

-----------------

#Case:3

-----------------

#Case:4

-----------------

*/

