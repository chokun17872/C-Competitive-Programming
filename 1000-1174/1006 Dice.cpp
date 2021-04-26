/*
TASK: Dice
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[10],tmp;
char b[1010];
void forward(int &a,int &b,int &c,int &d,int &e,int &f){
	tmp = b; b = a; a = tmp;
	tmp = d; d = a; a = tmp;
	tmp = f; f = d; d = tmp;		
}
void backward(int &a,int &b,int &c,int &d,int &e,int &f){
	tmp = b; b = a; a = tmp;
	tmp = d; d = b; b = tmp;
	tmp = f; f = b; b = tmp;		
}
void left(int &a,int &b,int &c,int &d,int &e,int &f){
	tmp = c; c = a; a = tmp;
	tmp = e; e = a; a = tmp;
	tmp = f; f = e;	e = tmp;	
}
void right(int &a,int &b,int &c,int &d,int &e,int &f){
	tmp = c; c = a; a = tmp;
	tmp = f; f = c;	c = tmp;
	tmp = f; f = e; e = tmp;	
}
void clock(int &a,int &b,int &c,int &d,int &e,int &f){
	tmp = c; c = b; b = tmp;
	tmp = d; d = b; b = tmp;
	tmp = b; b = e; e = tmp;		
}
void counterclock(int &a,int &b,int &c,int &d,int &e,int &f){
	tmp = c; c = b; b = tmp;
	tmp = d; d = c; c = tmp;
	tmp = d; d = e; e = tmp;		
}
int main(){
	
	int n,len;
	scanf("%d",&n);
	
	while(n--){
		a[1]=1,a[2]=2,a[3]=3,a[4]=5,a[5]=4,a[6]=6;
		scanf(" %s",b);
		len = strlen(b);
		for(int i=0 ; i<len ; i++){
			if(b[i]=='F') forward(a[1],a[2],a[3],a[4],a[5],a[6]);
			if(b[i]=='B') backward(a[1],a[2],a[3],a[4],a[5],a[6]);
			if(b[i]=='L') left(a[1],a[2],a[3],a[4],a[5],a[6]);
			if(b[i]=='R') right(a[1],a[2],a[3],a[4],a[5],a[6]);
			if(b[i]=='C') clock(a[1],a[2],a[3],a[4],a[5],a[6]);
			if(b[i]=='D') counterclock(a[1],a[2],a[3],a[4],a[5],a[6]);
		}
		printf("%d ",a[2]);	
	}
	
	return 0;
}

