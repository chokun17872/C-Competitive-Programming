/*
TAKS: Expression
AUTHOR: passa-
LANG: C++
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int mx[10];
int main() {
	
	cin >> a >> b >> c;
	
	mx[0] = a+b+c;
	mx[1] = a+(b*c);
	mx[2] = (a*b)+c;
	mx[3] = (a+b)*c;
	mx[4] = a*(b+c);
	mx[5] = a*b*c;
	
	sort(mx, mx+6, greater<int>());
	cout << mx[0];
	return 0;
}
/*
#Case:1
1 2 3
--------
9

#Case:2
2 10 3
--------
60
*/
