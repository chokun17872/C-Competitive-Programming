/*
TASK: ABC
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[10];
char b[10];
int main(){
	
	for(int i=0 ; i<3 ; i++)
		scanf("%d",&a[i]);
	scanf(" %s",b);
	sort(a,a+3);
	
	for(int i=0 ; i<3 ; i++){
		if(b[i]=='A') printf("%d",a[0]);
		if(b[i]=='B') printf("%d",a[1]);
		if(b[i]=='C') printf("%d",a[2]);
	}
		
	return 0;
}

