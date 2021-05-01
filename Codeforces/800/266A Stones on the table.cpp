/*
TASK:
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[100];
int main(){
	
	int n,cnt=0;
	scanf("%d",&n);
	scanf(" %s",a);
	
	for(int i=0 ; i<n ; i++){
		if(a[i]==a[i+1]) cnt++;
	}
	
	printf("%d\n",cnt);
	return 0;
}

