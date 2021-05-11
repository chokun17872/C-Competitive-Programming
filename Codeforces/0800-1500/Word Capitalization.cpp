/*
TASK: Wotd Capitalization
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[1010];
int main(){
	
	scanf(" %s",a);
	if(islower(a[0])) a[0]=toupper(a[0]);
	printf("%s",a);
	
	return 0;
}

