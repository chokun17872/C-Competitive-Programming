/*
TASK: RT_Hire Friend
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
map<long long,long long> mp;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	long long n,s,e,i,ans=0,last=0,qs=0;
	cin >> n;
	while(n--){
		cin >> s >> e;
		mp[s]++,mp[e+1]--;
	}
	for(auto p: mp){
		if(qs>1)
			ans+=(qs-1)*(p.first-last);
		qs+=p.second;
		last = p.first;	
	}
	cout << ans << endl;
	return 0;
}

