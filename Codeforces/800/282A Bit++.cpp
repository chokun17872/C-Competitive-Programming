/*
TASK: Bit++
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char opr[10];
int main(){
	
	int n,x=0;
	scanf("%d",&n);
	while(n--){
		scanf(" %s",opr);
		if(!strcmp(opr,"++X")||!strcmp(opr,"X++")) x++;
		else if(!strcmp(opr,"--X")||!strcmp(opr,"X--")) x--;
	}
	
	printf("%d\n",x);
	return 0;
}

