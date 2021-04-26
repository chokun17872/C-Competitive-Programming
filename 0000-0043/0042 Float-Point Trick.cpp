/*
TASK: Float-PointTrick
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char ans[100000];
int main(){
	int q,n,len,tod=0,ch=0;
	scanf("%d",&q);
		
	while(q--){
		
		ans[0]=2;
		len=1;
		scanf("%d",&n);
				
		for(int i=0 ; i<n-1 ; i++){ // multiply times
			for(int j=0 ; j<len ; j++){ // sub multiply
				ans[j] = ans[j]*2+tod;
				if(ans[j]>=10){
					tod = ans[j]/10;
					ans[j]%=10;
				}
				else tod=0;		
			}		
			if(tod){ // still have a tod after multiply all num
				ans[len]=tod;
				len++; // increase len
			}
			tod=0;
		}
		
		for(int i=len ; i>=0 ; i--){ // start print when found number != 0
			if(ans[i]) ch=1; 
			if(ch) printf("%d",ans[i]);		
		}
		memset(ans,0,sizeof ans);
		ch=0;
	}
					
	return 0;
	
}

