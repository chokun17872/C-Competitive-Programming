/*
TASK: AP_Bush
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
long long a[1010];
int main(){

	long long q,n,k,cnt;
	cin >> q ;
	while(q--){
		cin >> n >> k ;
		for(int i=1 ; i<=n ; i++){
			cin >> a[i] ;
		}
		sort(a+1,a+n+1);
		long long l=0,r=2e9,dis;
		while(l<r){
			long long mid=(l+r)/2;
			cnt=(mid+1)*(mid+1);
			for(int i=2 ; i<=n ; i++){
				if(a[i]==a[i-1]) continue;
				cnt+=(mid+1)*(mid+1);
				dis=a[i]-a[i-1]-1;
				if(dis%2){
					dis/=2;
					if(mid>dis){
						dis=mid-dis;
						cnt-=(dis*dis);
					}
				}else{
					dis/=2;
					if(mid>dis){
						dis=mid-dis;
						cnt-=(dis*(dis+1));
					}
				}
			}
			if(cnt>=k) r=mid;
			else l=mid+1;
		}
		cout << l << endl ; 
	}
	return 0;
}

