/*
TASK: Queue at the school
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[100];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
	int n,t;
	cin >> n >> t >> a;
	while(t--){
		for(int i=0 ; i<n ; i++)
			if(a[i]=='B'&&a[i+1]=='G') swap(a[i],a[i+1]),i++;
	}
	cout << a;
	return 0;
}

