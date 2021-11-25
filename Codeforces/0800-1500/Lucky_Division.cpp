/*
TAKS: Lucky Division
AUTHOR: passa-
LANG: C++
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int n;
int lucky_num[12] = {4, 7, 47, 74, 444, 447, 474, 477, 777, 774, 747, 744};
int main(){
	
	cin >> n;
	
	for(int i=0 ; i<12 ; i++){
		if(n % lucky_num[i] == 0){
			cout << "YES";
			return 0;
		}
	}
	
	cout << "NO";
	return 0;
}
/*
#Case:1
47
-----
YES

#Case:2
16
-----
YES

#Case:3
78
-----
NO
*/
