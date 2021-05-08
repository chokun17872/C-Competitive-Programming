/*
    TASK: Golden Triangle
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	string str;
	bool operator < (const A& o)const{
		if(str+o.str<o.str+str) return true;
		return false;
	}
};
A a[100100];
int main(){
	int n,i;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		cin>>a[i].str;
	}
	sort(a,a+n);
	for(int i=0 ; i<n ; i++){
		cout<<a[i].str;
	}
	return 0;
	
}
