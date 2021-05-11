/*
TASK: Fair Division
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	
	int q,n,sum,cnt,ch;
	scanf("%d",&q);
	while(q--){
		scanf("%d",&n);
		sum=0; ch=0; cnt=0;
		for(int i=0 ; i<n ; i++){
			scanf("%d",&a[i]);
			sum+=a[i];
			if(a[i]==2) cnt++;
			if(a[i]==1) ch=1;
		}
		if(sum%2==0){
			if(ch) printf("Yes\n");
			else if(cnt%2==0) printf("Yes\n");
			else printf("No\n");			
		}
		else			 printf("No\n");	
	}
	
	return 0;
}

