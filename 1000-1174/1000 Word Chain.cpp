/*
TASK: Word Chain
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
	char a[10000];
};
A x[100000];
int main(){
	
	int l,n,cnt=0;
	scanf("%d %d",&l,&n);
	
	for(int i=0 ; i<n ; i++)
		scanf(" %s",x[i].a);
	
	for(int i=0 ; i<n-1 ; i++){
		for(int j=0,cnt=0 ; j<l ; j++){
			if(x[i].a[j]!=x[i+1].a[j]) cnt++;
			if(cnt>2){
				printf("%s",x[i]);
				break;
			}
		}
	}
			
	return 0;
}

