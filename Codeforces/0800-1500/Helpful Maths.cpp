/*
TASK: Helpful Maths
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[1000],b[1000];
int main(){

	int len,j=0,lennew;
	scanf(" %s",a);
	len = strlen(a);
	for(int i=0 ; i<len ; i++)
		if(a[i]!='+') b[j]=a[i],j++;
				
	sort(b,b+j);
	lennew = j;
	for(int i=0 ; i<lennew-1 ; i++)
		printf("%c+",b[i]);
	printf("%c",b[lennew-1]);
		
	return 0;
}

