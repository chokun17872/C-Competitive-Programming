/*
TASK: Word
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e2+10;
char a[N];
int main(){
	
	int len,big=0,small=0;
	cin >> a ;
	len = strlen(a);
	for(int i=0 ; i<len ; i++){
		if(isupper(a[i])) big++;
		else small++;
	}
	for(int i=0 ; i<len ; i++){
		if(big>small){
			if(islower(a[i])) a[i]=toupper(a[i]);	
		}
		else if(isupper(a[i])) a[i]=tolower(a[i]);		
	}
	cout << a << endl ;	
			
	return 0;
}

