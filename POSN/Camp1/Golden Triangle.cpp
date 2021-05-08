/*
    TASK: Golden Triangle
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
long long x[100100],y[100100],cx[100100],cy[100100];
int main(){
	long long i,n,ans=0;
	scanf("%lld",&n);
	for(int i=0 ; i<n ; i++){
		scanf("%lld %lld",&x[i],&y[i]);
		cx[ x[i] ]++, cy[ y[i] ]++;
	}
	for(int i=0 ; i<n ; i++)
		ans+= (cx[ x[i] ]-1)*(cy[ y[i] ]-1);
	printf("%lld\n",ans);
	return 0;	
}
