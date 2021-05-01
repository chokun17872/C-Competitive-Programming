/*
TASK: Roboturtle
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[10100],tid=2,x,y;
char b[10100][10100],chartid;
void rotate(char opr[100]){
	if(!strcmp(opr,"RT")) tid++;
	if(!strcmp(opr,"LT")) tid--;
	if(!strcmp(opr,"BW")) tid+=2;
	if(tid>4) tid-=4;
	if(tid==0) tid=4;
}
int main(){
	
	int n;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		scanf("%s %d",b[i],&a[i]); 
	}
				
	for(int i=0 ; i<n ; i++){
		rotate(b[i]);
		if(tid==1) y+=a[i],chartid='N';
		if(tid==2) x+=a[i],chartid='E';
		if(tid==3) y-=a[i],chartid='S';
		if(tid==4) x-=a[i],chartid='W';
		if(x >= 50000 || y >= 50000 || x<= -50000 || y<= -50000){
			printf("DEAD"); return 0;
		}
	}
	
	printf("%d %d\n%c\n",x,y,chartid);
	
	return 0;
}

