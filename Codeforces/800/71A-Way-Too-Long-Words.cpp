/*
TASK: Way Too Long Words
Author: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[1000];
int main(){
	
	int n,len,num;
	scanf("%d",&n);
	while(n--){
		scanf(" %s",a);
		len = strlen(a);
		if(len<=10) printf("%s\n",a);
		else{
			num = len-2;
			printf("%c%d%c\n",a[0],num,a[len-1]);
		}
	}
	
	return 0;
}
