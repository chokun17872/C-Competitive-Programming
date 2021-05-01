/*
TASK: Least Common Multiplier
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){ // don't forget to use long long since lcm has high value
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
int main(){
	
	long long n,lcm,ans,num;
	scanf("%lld %lld",&n,&ans);
	for(int i=0 ; i<n-1 ; i++){
		scanf("%lld",&num);
		ans = ans*num/gcd(ans,num);
	}
	
	printf("%lld\n",ans);
	return 0;
}

