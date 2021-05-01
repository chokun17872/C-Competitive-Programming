/*
TASK: Character Checker
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[10010];
int main(){
	
	int len,upr=0,lwr=0;
	scanf(" %s",a);
	len = strlen(a);
	
	for(int i=0 ; i<len ; i++){
		if(isupper(a[i])) upr++;
		if(islower(a[i])) lwr++;
	}
	
	if(upr==len) printf("All Capital Letter");
	else if(lwr==len) printf("All Small Letter");
	else printf("Mix");
	
	return 0;
}

