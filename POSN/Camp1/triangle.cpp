/*
    TASK: triangle
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
		
	sort(a,a+n);
	if(a[0]+a[1]>a[n-1] || n<3) printf("no\n");
	else printf("yes\n");
	
	return 0;
		
}
