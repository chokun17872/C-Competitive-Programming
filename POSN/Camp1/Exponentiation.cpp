/*
    TASK: Exponatiation
    LANG: C
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int c[10000];
int main(){
	
	int q,a,n,len=1,tod;
	scanf("%d",&q);
	
	while(q--){
		scanf("%d %d",&a,&n);
		if(n==0){ // a^0=1
			printf("1\n");
			continue;
		}
		c[0]=1,len=1;
		for(int i=0 ; i<n ; i++){
			tod=0;
			for(int j=0 ; j<len ; j++){
				c[j] = c[j]*a + tod;
				if(c[j]>=10)
					tod=c[j]/10, c[j]%=10;
				else
					tod=0;					
			}
			if(tod)
				c[len]=tod, len++;				
		}
		for(int j=len-1 ; j>=0 ; j--)
			printf("%d",c[j]);
		printf("\n");	
		memset(c,0,sizeof c);		
	}
	
	return 0;
		
}
