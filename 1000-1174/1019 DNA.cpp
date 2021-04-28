/*
TASK: DNA
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[1000],b[1000];
int cnt,mx;
int main(){
	
	int lena,lenb,k,ns=0,ne=0,s=0,e=0;
	scanf("%s %s",a,b);
	lena = strlen(a);
	lenb = strlen(b);
	
	for(int i=0 ; i<lena ; i++){
		k=s=i; // set start and k index
		for(int j=0 ; j<lenb ; j++){
			if(a[k]==b[j]) cnt++,e=k,k++; // move endpoint
			else cnt=0,k=i; // reset count,k index to get back where you start
			if(cnt>mx){
				ns=s; // update start/end point and max
				ne=e;
				mx=cnt;	
			}
		}
		cnt=0;
	}

	for(int i=ns ; i<=ne ; i++)
		printf("%c",a[i]);
		
	return 0;
}

