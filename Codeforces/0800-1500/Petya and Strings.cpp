/*
TASK: Petya and Strings
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[1000],b[1000];
int main(){
	
	int len;
	scanf(" %s %s",a,b);
	len = strlen(a);
	for(int i=0 ; i<len ; i++){
		if(isupper(a[i])) a[i]=tolower(a[i]);
		if(isupper(b[i])) b[i]=tolower(b[i]);
	}
	if(!strcmp(a,b)) printf("0\n");
	else if(strcmp(a,b)<0) printf("-1\n");
	else if(strcmp(a,b)>0) printf("1\n");
	
	return 0;
}

