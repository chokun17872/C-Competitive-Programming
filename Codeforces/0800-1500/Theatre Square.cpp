/*
TAKS: Theatre Square
AUTHOR: passa-
LANG: C++
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
long long n,m,a,x,y,cnt;
int main(){
	
	cin >> n >> m >> a;
	
//	if(n*m <= a*a){
//		cout << 1;
//		return 0;
//	}
	
	x = n/a;
	if(n%a != 0) x++;
	y = m/a;
	if(m%a != 0) y++;
	//cout << x << y;
	cout << x*y;
	return 0;
	
}
/*
#Case:1
6 6 4

4

*/
