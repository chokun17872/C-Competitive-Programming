/*
TAKS: Dragons
AUTHOR: passa-
LANG: C++
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int s,n;
struct A{
	int x,y;
	bool operator < (const A& o)const{
		return x < o.x;
	}
};
A d[1010];
int main(){
	
	cin >> s >> n;
	for(int i=0 ; i<n ; i++) cin >> d[i].x >> d[i].y;
	
	sort(d,d+n);
	
	for(int i=0 ; i<n ; i++){
		if(s <= d[i].x){
			cout << "NO";
			return 0;
		}
		else s += d[i].y;
	}
	
	cout << "YES";
	return 0;
}
/*
#Case:1
2 2
1 99
100 0
---------
YES

#Case:2
10 1
100 100
---------
NO
*/

