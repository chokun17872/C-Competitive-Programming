/*
    TASK: ABC Hidden
    LANG: CPP
    AUTHOR: Pooripat Apirukchotima
    SCHOOL: CRU
*/
#include<bits/stdc++.h>
using namespace std;
long long qsa[1000100],qsc[1000100];
char a[1000100];
int main(){
	long long q,len,i,ans;
	scanf("%lld",&q);
	while(q--){
		scanf("%s",a+1);
		len = strlen(a+1);
		for(i=1,ans=0 ; i<=len ; i++){
			qsa[i] = qsa[i-1];
			if(a[i]=='A') qsa[i]++;
		}
		for(i=len ; i>=1 ; i--){
			qsc[i] = qsc[i+1];
			if(a[i]=='C') qsc[i]++;
		}
		for(i=1 ; i<=len ; i++)
			if(a[i]=='B') ans += qsa[i]*qsc[i];
		printf("%lld\n",ans);
		memset(qsa,0,sizeof qsa),memset(qsc,0,sizeof qsc);	
	}
	return 0;
}
