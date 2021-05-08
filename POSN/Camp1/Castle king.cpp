/*
    TASK: Hack
    LANG: CPP
    AUTHOR: passa-
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
long long a[500100];
int main(){
	long long n,ans=0,i;
	scanf("%lld",&n);
	for(i=0 ; i<n ; i++)
		scanf("%lld",&a[i]);
	sort(a,a+n);
	for(i=0 ; i<n ; i++)
		ans+= a[i]*2;
	printf("%lld\n",ans+a[n-1]*2+n);
	return 0;		
}
