/*
TASK: Latch
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
long long n,m,i,j,a[1010][1010],cnt[1010],now,sum,it,p,v,sump,ans;
stack<pair<int,int>> st;
int main(){

	cin >> n >> m ;
	for(i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			cin >> a[i][j] ; 
		}
	}
	for(i=1 ; i<=n ; i++){
		now=sum=sump=it=0;
		for(j=1 ; j<=m ; j++){
			if(a[i][j]==a[i-1][j]) cnt[j]++;
			else cnt[j]=1;
			if(a[i][j]!=now){
				sum=0; sump=0; it=j-1;
				while(!st.empty()) st.pop();
			}else{
				while(!st.empty()){
					p=st.top().first;
					v=st.top().second;
					if(v>=cnt[j]){
						sum-=(p*v);
						sump-=p;
						st.pop();
					}else{
						break;
					}
				}
			}
			st.push({j-it-sump,cnt[j]});
			sum+=((j-it-sump)*cnt[j]);
			sump+=(j-it-sump);
			ans+=sum;
			now=a[i][j];
		}
		while(!st.empty()) st.pop();
	}
	cout << ans << endl ;
	return 0;
}

