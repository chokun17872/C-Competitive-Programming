/* 
 	TASK: Peatty Robot 3
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn	
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
char a[200];
int cntn,cnte,cnts,cntw;
int main(){
	
	int k,max=-1,x,y,d,n,tmp;
	scanf(" %s %d",a,&k);
	n = strlen(a);
	if(n==k){
		printf("0\n"); return 0;
	}
	for(int i=0 ; i<n ; i++){
		if(a[i] == 'N') cntn++;
		if(a[i] == 'E') cnte++;
		if(a[i] == 'S') cnts++;
		if(a[i] == 'W') cntw++;
	}
	while(k>0){
		if(cntn>=cnts || cnts == 0){
			if(cnts>=k) cnts-=k,k=0;
			else if(cnte==0&&cnts==0&&cntw==0) cntn-=k,k=0;
			else if(cnts==0&&(cntw==0||cnte==0)){
				if(cntn>=k) cntn-=k,k=0;
				else k-=cntn,cntn=0;
			}
			else k-=cnts,cnts=0;
		}
		else if(cnts>cntn || cntn == 0){
			if(cntn>=k) cntn-=k,k=0;
			else if(cntw==0&&cntn==0&&cnte==0) cnts-=k,k=0;
			else if(cntn==0&&(cntw==0||cnte==0)){
				if(cnts>=k) cnts-=k,k=0;
				else k-=cnts,cnts=0;
			}
			else k-=cntn,cntn=0;
		}
		if(cnte>=cntw || cntw == 0){
			if(cntw>=k) cntw-=k,k=0;
			else if(cntw==0&&cnts==0&&cntn==0) cnte-=k,k=0;
			else if(cntw==0&&(cntn==0||cnts==0)){
				if(cnte>=k) cntn-=k,k=0;
				else k-=cnte,cnte=0;
			}
			else k-=cntw,cntw=0;
		}
		else if(cntw>cnte || cnte == 0){
			if(cnte>=k) cnte-=k,k=0;
			else if(cntn==0&&cnte==0&&cnts==0) cntw-=k,k=0;
			else if(cnte==0&&(cntn==0||cnts==0)){
				if(cntw>=k) cntw-=k,k=0;
				else k-=cntw,cntw=0;
			}
			else k-=cnte,cnte=0;
		}	
	}	
	x = abs(cntn-cnts);
	y = abs(cnte-cntw);
	d = (x+y)*2;
	printf("%d",d);
	return 0;	
}
