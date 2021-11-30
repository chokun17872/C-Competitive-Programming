/*
TAKS: Laptops
AUTHOR: passa-s
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	int a,b;
	bool operator<(const A& o)const{
		return a < o.a;
	}
};
A l[100100];
int n,p,q;
int main(){
	
	cin >> n;
	for(int i=0 ; i<n ; i++) cin >> l[i].a >> l[i].b;
	
	sort(l,l+n);
	p=l[0].a; q=l[0].b;
	for(int i=1 ; i<n ; i++){
		if(l[i].a > p && l[i].b < q){
			cout << "Happy Alex";
			return 0;
		}
		p = l[i].a;
		q = l[i].b;
	}
	
	cout << "Poor Alex";
	return 0;
	
}
/*
#Case:1
2
1 2
2 1
-----------------
Happy Alex

#Case:2

-----------------

#Case:3

-----------------

#Case:4

-----------------

*/

