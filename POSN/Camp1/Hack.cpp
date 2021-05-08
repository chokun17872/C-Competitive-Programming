/*
    TASK: Hack
    LANG: CPP
    AUTHOR: passa-
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
string a[10100],b;
int main(){
	int n,m,k,i;
	scanf("%d %d %d",&n,&m,&k);
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	while(m--){
		cin >> b;
		i = lower_bound(a,a+n,b) - a;
		printf(a[i]==b?"Accepted\n":"Rejected\n");
	}
	return 0;	
}
