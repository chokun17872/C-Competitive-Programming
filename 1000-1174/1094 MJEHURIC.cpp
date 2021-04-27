/*
TASK: MJEHURIC
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[10],tmp;
int main(){
	
	for(int i=1 ; i<=5 ; i++)
		scanf("%d",&a[i]);
	
	for(int i=1 ; i<=4 ; i++){
		if(a[i]>a[i+1]){
			tmp=a[i+1],a[i+1]=a[i],a[i]=tmp;
			printf("%d %d %d %d %d\n",a[1],a[2],a[3],a[4],a[5]);				
		}
		if(a[1]==1 && a[2]==2 && a[3]==3 && a[4]==4 & a[5]==5) return 0;
		if(i==4) i=0; 
	}	
	return 0;
}

