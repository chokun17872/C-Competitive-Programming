/*
    TASK: BUU Contest
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
priority_queue<long long> h;
int main(){
	long long d,k,up=0,n,b,ans=0,num;
	scanf("%lld %lld",&d,&k);
	while(d--){
		scanf("%lld %lld",&n,&b);
		while(n--){
			scanf("%lld",&num);
			h.push(num-up);
		}
		while(b--){
			ans += h.top() + up;
			h.pop();
		}
		up+=k;
	}
	printf("%lld",ans);
	return 0;
}
