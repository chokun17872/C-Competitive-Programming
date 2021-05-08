/*
TASK: Printer
LANG: CPP
AUTHOR: Chavalvit Keartnattakorn
SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
char a[110];
char rotate(char tid){
	printf("R");
	if(tid == 'N') return 'E';
	if(tid == 'E') return 'S';
	if(tid == 'S') return 'W';
	if(tid == 'W') return 'N';	
}
int main(){
	
	scanf(" %s",a);
	int len = strlen(a);
	char tid = 'N';
	
	for(int i=0 ; i<len ; i++){
		if(a[i] == 'N'){
			while(tid != 'N'){
				tid = rotate(tid);
			}
			printf("F");
		}
		if(a[i] == 'E'){
			while(tid != 'E'){
				tid = rotate(tid);
			}
			printf("F");
		}
		if(a[i] == 'S'){
			while(tid != 'S'){
				tid = rotate(tid);
			}
			printf("F");
		}
		if(a[i] == 'W'){
			while(tid != 'W'){
				tid = rotate(tid);
			}
			printf("F");
		}
		if(a[i] == 'Z'){
			tid = 'N';
			printf("Z");
		}
	}
			
	return 0;
}
