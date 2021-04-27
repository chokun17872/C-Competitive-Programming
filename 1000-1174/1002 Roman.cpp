/*
TASK: Roman
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int dpI[500],dpV[500],dpX[500],dpL[500],dpC[500];
int I,V,X,L,C;
int main(){
	
	int d,n;
	scanf("%d",&d);
	
	for(int i=1 ; i<=400 ; i++){ // precompute
		n=i;
		while(n){
			if(n>=100) C++,n-=100;
			else if(n>=90) C++,X++,n-=90;
			else if(n>=50) L++,n-=50;
			else if(n>=40) L++,X++,n-=40;
			else if(n>=10) X++,n-=10;
			else if(n>=9) X++,I++,n-=9;
			else if(n>=5) V++,n-=5;
			else if(n>=4) V++,I++,n-=4;
			else if(n>=1) I++,n-=1;
		}
		dpI[i]=I,dpV[i]=V,dpX[i]=X,dpL[i]=L,dpC[i]=C;
	}
	
	printf("%d %d %d %d %d\n",dpI[d],dpV[d],dpX[d],dpL[d],dpC[d]);
	return 0;
}

