/*
TAKS: String Task
AUTHOR: passa-
LANG: C++
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
char str[210], new_str[210];
int p;
int main(){
	
	cin >> str;
	for(int i=0 ; i<strlen(str) ; i++){
		str[i] = tolower(str[i]);
	}
	
	for(int i=0 ; i<strlen(str) ; i++){
		if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y'){
			new_str[p] = '.';
			new_str[p+1] = str[i];
			p += 2;
		}
	}
	
	cout << new_str;
	return 0;
}
/*
#Case:1
tour

.t.r

#Case:2
Codeforces

.c.d.f.r.c.s

#Case:3
aBAcAba

.b.c.b
*/
