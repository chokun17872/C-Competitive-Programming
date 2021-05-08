/*
    TASK: Kaffirlimespa
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
long long a[1000],b[1000];
int main(){
	int n;
	long long c=0;
	scanf("%d",&n);
	
	for(int i=0 ; i<n ; i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	
	for(int i=0 ; i<n ; i++){
		scanf("%lld",&b[i]);
	}
	sort(b,b+n);

	for(int i=0 ; i<n ; i++){
		c+=a[i]*b[n-i-1];
	}
	printf("%lld",c);
}
