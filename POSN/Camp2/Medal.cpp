/*
TASK: Medal
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+1;
long long a[N],b[N],c[N];
int main(){

	long long n,ans=0;
	scanf("%lld",&n);
	for(long long i=1 ; i<=n ; i++) scanf("%lld",&a[i]);
	for(long long i=1 ; i<=n ; i++) scanf("%lld",&b[i]);
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(long long i=1 ; i<=n ; i++) c[i]=a[n-i+1]+b[i];
	sort(c+1,c+n+1);
	for(long long i=2 ; i<=n ; i++) ans+=abs(c[i]-c[i-1]);
	printf("%lld\n",ans);
	return 0;
}

