/*
TAKS: cAPS lOCK
AUTHOR: passa-
LANG: C++
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;
int main(){
	
	cin >> s;
	
	for(int i=0 ; i<s.size() ; i++){
		if(isupper(s[i])) cnt++;
	}

	if((islower(s[0]) && cnt == s.size()-1) || (cnt == s.size())){
		for(int i=0 ; i<s.size() ; i++){
			if(isupper(s[i])){
				s[i] = tolower(s[i]);
			}
			else if(islower(s[i])) s[i] = toupper(s[i]);
		}
	}
	
	cout << s;
	return 0;
}
/*
#Case:1
cAPS
-------
Caps

#Case:2
Lock
-------
Lock
*/
