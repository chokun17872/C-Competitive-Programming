/*
TAKS: 1328C
AUTHOR: passa-
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int t,n,num;
string s;
bool sw = false;
vector<int> a,b;
int main(){
	
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		for(int i=0 ; i<n ; i++){
			num = s[i]-'0';
			if(num == 2){
				if(sw){
					a.push_back(0);
					b.push_back(2);
				}
				else{
					a.push_back(1);
					b.push_back(1);	
				}
			}	
			else if(num == 1){
				if(sw){
					a.push_back(0);
					b.push_back(1);
				}
				else{
					a.push_back(1);
					b.push_back(0);	
					sw = true;
				}		
			}
			else{
				a.push_back(0);
				b.push_back(0);
			}
		}
		
		for(int i=0 ; i<n ; i++){
			cout << a[i];
		}
		cout << endl;
		for(int i=0 ; i<n ; i++){
			cout << b[i];
		}		
		cout << endl;
		
		// memset
		sw = false;
		a.clear();
		b.clear();
	}
	
	return 0;
}
/*
#Case:1
4
5
22222
5
21211
1
2
9
220222021
-----------------
11111
11111
11000
10211
1
1
110111011
110111010

#Case:2

-----------------

#Case:3

-----------------

#Case:4

-----------------

*/

