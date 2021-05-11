/*
TASK: Last minute enhancements
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100],mark[200100];
int main(){
	
	int q,n,cnt,ch,mx;
	scanf("%d",&q);
	while(q--){
		scanf("%d",&n);
		for(int i=0 ; i<n ; i++)
			scanf("%d",&a[i]);
		cnt=0; ch=0; mx=-1;
		for(int i=1 ; i<n ; i++){
			if(a[i]==a[i-1]) ch=1;
			if(ch){
				if(a[i]!=a[i+1]) a[i]++; 
				ch=0;	
			}
		}
		for(int i=0 ; i<n ; i++){
			mx = max(mx,a[i]);
			mark[a[i]]++;
		}					
		for(int i=0 ; i<=mx ; i++){
			if(mark[i]) cnt++;  
		}	
		printf("%d\n",cnt);
		memset(a,0,sizeof a);
		memset(mark,0,sizeof mark);
	}
	
	return 0;
}

