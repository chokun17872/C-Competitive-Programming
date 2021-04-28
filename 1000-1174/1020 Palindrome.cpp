/*
TASK: Palindrome
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[500],b[500],c[500],d[500],e[500],f[500];
int main(){
	
	int len,type=0;
	scanf(" %s",a);
	len = strlen(a);
	for(int i=0 ; i<len ; i++)
		if(isupper(a[i])) a[i]+=32;

	for(int i=0 ; i<len ; i++)
		b[i]=a[len-i-1];	
	if(!strcmp(a,b)) type++;
	
	if(type==1){
		if(len%2==0){
			for(int i=0,j=0 ; i<len ; i++){
				if(i<len/2) c[i]=a[i];
				else d[j]=a[i],j++;
			}
			for(int i=0 ; i<len/2 ; i++){
				e[i]=c[len/2-i-1];
				f[i]=d[len/2-i-1];			
			}
		if(!strcmp(c,e)&&!strcmp(d,f)) type++;			
		}		
		else{
			for(int i=0,j=0 ; i<len ; i++){
				if(i<len/2) c[i]=a[i];
				if(i>len/2) d[j]=a[i],j++;
			}
			for(int i=0 ; i<len/2 ; i++){
				e[i]=c[len/2-i-1];
				f[i]=d[len/2-i-1];
			}
		if(!strcmp(c,e)&&!strcmp(d,f)) type++;	
		}		
	}
		
	if(type==2) printf("Double Palindrome");
	if(type==1) printf("Palindrome");
	if(type==0) printf("No");
			
	return 0;
}

