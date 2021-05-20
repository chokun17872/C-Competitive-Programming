/*
TASK:
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[110],b[110],c[110];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int len;
	cin >> a;
	cin >> b;
	len = strlen(a);
	for(int i=0 ; i<len ; i++){ // reverse back
		c[i]=b[len-i-1];
	}
	if(!strcmp(a,c)) cout << "YES\n";
	else			 cout << "NO\n";
	return 0;
}

