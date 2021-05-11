/*
TASK: Maximum Increase
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
	
	int n,mx=0,mxlen=0,len=1;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	for(int i=0 ; i<n ; i++){
		if(a[i+1]>a[i]) len++;
		if(a[i+1]<=a[i]) len=1;
		if(len>mxlen) mxlen = len;
	}

	printf("%d\n",mxlen);	
	return 0;
}

