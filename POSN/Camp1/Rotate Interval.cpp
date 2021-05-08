/* 
 	TASK: Rotate Interval
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
char a[1010],b[1010];
int main(){
	int q,n,m,k,l,len;
	scanf("%d",&q);
	
	while(q--){
		scanf(" %s",a);
		scanf("%d %d",&n,&k);		
		len = strlen(a);
		m = len/n; // m = block
		l = k%n;
		for(int i=0 ; i<len ; i+=n){
			for(int j=0 ; j<n ; j++){
				if(j+i+l < n+i) b[j+i+l] = a[j+i];
				else b[j+i+l-n] = a[j+i];
			}
		}
		for(int i=0 ; i<len ; i++){
			printf("%c",b[i]);	
		}
		printf("\n");		
	}
}
