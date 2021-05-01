/*
TASK: Boys or Girls
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[1000];
int mark[1000];
int main(){
	
	int len,num;
	scanf(" %s",a);
	len = strlen(a);
	num = len;
	
	for(int i=0 ; i<len ; i++){
		for(int j=i+1 ; j<len ; j++){
			if(!mark[i]&&!mark[j]&&a[i]==a[j]) num--,mark[j]=1;
		}
		mark[i]=1;	
	}
	
	if(num%2==0) printf("CHAT WITH HER!");
	else printf("IGNORE HIM!");
	return 0;
}

