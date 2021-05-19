/*
TASK: Magnet YTOPC
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[200100],b[200100];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,m,q,i,r,s,cnt=0,j;
	cin >> n >> m >> q;
	while(m--){
		cin >> r >> s;
		a[cnt++]=r,a[cnt++]=r+s;
	}
	sort(a,a+cnt);
	for(i=0,r=0 ; i<cnt ; i=j){
		for(j=i+1 ; j<cnt && a[i]==a[j] ; j++);
		if((j-i)%2==1){
			b[r++]=a[i];
		}
	}
	while(q--){
		cin >> s;
		if(s<b[0]) cout << b[0]-1 << endl;
		else if(s>=b[r-1]) cout << n-b[r-1]+1 << endl;
		else{
			i=upper_bound(b,b+r,s)-b;
			cout << b[i]-b[i-1] << endl;
		}
	}	
	return 0;
}

