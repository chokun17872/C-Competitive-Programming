/*
TASK: Nearly Lucky Number
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char number[20];
int main(){
	int len,cnt=0;
	scanf("%s",number);
	len = strlen(number);
	for(int i=0 ; i<len ; i++){
		if(number[i]=='4'||number[i]=='7'){
			cnt++;
		}
	}
	if(cnt==4||cnt==7){
		printf("YES");		
	}
	else
		printf("NO");

	return 0;
}

