/*
    TASK: Skyline
    LANG: C
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int a[300];
int main(){
	
	int n,l,h,r,i,last;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d",&l,&h,&r);
		for(i=l ; i<r ; i++){
			if(h>a[i])
				a[i] = h;
		}
	}
	for(i=0,last=a[0] ; i<=260 ; i++){
		if(a[i]!=last){
			printf("%d %d ",i,a[i]);
			last = a[i];
		}
	}
	return 0;
}
