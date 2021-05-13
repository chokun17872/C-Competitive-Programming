/*
TASK: Mod of Power
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
long long ModofPower(long long a,long long b,long long c){
	if(b==1) return a%c;
	long long t = ModofPower(a,b/2,c);
	if(b%2==0) return (t*t)%c;
	else	   return (t*t*a)%c;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	long long q,a,b,c;
	cin >> q;
	while(q--){
		cin >> a >> b >> c;
		cout << ModofPower(a,b,c) << endl;
	}
	return 0;
}

