/*
TASK: RO
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
map<long long,long long> mp;
char a[1000010];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	long long n,k,i,qs=0,ans=0;
	cin >> n >> k >> a+1;
	for(i=1 ; i<=n ; i++){
		if(a[i]=='O') qs++;
		else		  qs-=k;
		if(mp[qs]) ans=max(ans,i-mp[qs]);
		else	   mp[qs]=i;
	}
	cout << ans << endl;
	return 0;
}

