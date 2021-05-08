/*
    TASK: Prime Factorization
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
int ans[100100],a[100100];
int main(){
	int n,m,i,num,q,cnt,poopbruh;
	scanf("%d",&q);
	while(q--){
		scanf("%d",&n);
		for(i=0 ; i<n ; i++){
			scanf("%d",&a[i]);
			mp[a[i]]++;
		}
		for(i=0,cnt=0 ; i<n ; i++){
			if(mp[a[i]]==1){
				ans[cnt++] = a[i], mp[a[i]]=0;
			}
		}
		if(cnt==0)
			printf("No Alone Num\n");
		else{
			for(i=0 ; i<cnt ; i++)
				printf("%d ",ans[i]);
			printf("\n");	
		}
		mp.clear();
		memset(ans,0,sizeof ans);	
	}
}

