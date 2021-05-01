/*
TASK:
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
double A[1000010],B[1000010];
int main(){
	
	int a,b,cnt=0;
	double ava,avb,suma,sumb,atmp,btmp;
	scanf("%d %d",&a,&b);
	for(int i=0 ; i<a ; i++){
		scanf("%lf",&A[i]);
		suma+=A[i];
		ava = suma/a;
	}
	for(int i=0 ; i<b ; i++){
		scanf("%lf",&B[i]);
		sumb+=B[i];
		avb = sumb/b;
	}
	if(ava==avb){ // can't move
		printf("0\n"); return 0;	
	}
	if(ava>avb){ // case1	
		atmp=a; btmp=b;
		for(int i=0 ; i<a&&A[i]<ava&&atmp>1 ; i++){ // move snack while price is less than ava and have at least 1 snack in bag
			if(A[i]>avb){ // move snack that price > avb but < ava so ava,avb will both increase
				cnt++;
				ava = (ava*atmp-A[i])/(atmp-1); // update ava
				atmp--;
				sumb+=A[i]; // update sumb
				avb = sumb/(btmp+1); // update avb			
				btmp++;				
			}
		}
	}
	else if(ava<avb){ // case2		
		atmp=a; btmp=b;
		for(int i=0 ; i<b&&B[i]<avb&&btmp>1 ; i++){
			if(B[i]>ava){ 
				cnt++;
				avb = (avb*btmp-B[i])/(btmp-1); 
				btmp--;
				suma+=B[i]; 
				ava = suma/(atmp+1); 			
				atmp++;				
			}
		}
	}

	printf("%d",cnt);
	return 0;
}

