/*
TAKS: Chat room
AUTHOR: passa-
LANG: C++
*/
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	
	cin >> s;
	//cout << s;
	
	for(int i=0 ; i<s.size() ; i++){
		if(s[i] != 'h') continue;
		for(int j=i+1 ; j<s.size() ; j++){
			if(s[j] != 'e') continue;
			for(int k=j+1 ; k<s.size() ; k++){
				if(s[k] != 'l') continue;
				for(int l=k+1 ; l<s.size() ; l++){
					if(s[l] != 'l') continue;
					for(int m=l+1 ; m<s.size() ; m++){
						if(s[m] == 'o'){
							cout << "YES";
							return 0;
						}
						continue;
					}
				}
			}
		}
	}
	
	cout << "NO";
	return 0;
}
/*
#Case:1
ahhellllloou
--------------
YES

#Case:2
hlelo
--------------
NO
*/
