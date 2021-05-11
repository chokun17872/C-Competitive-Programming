/*
TASK: Elephant
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n,ans;
	cin >> n;
	ans = n/5;
	if(n%5!=0) ans++;
	cout << ans << endl;
	
	return 0;
}

