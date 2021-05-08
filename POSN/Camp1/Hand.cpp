/*
    TASK: Hands
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int a[5000];
int main(){
	
	int n,k,t=0;
	scanf("%d %d",&n,&k);
	
	for(int i=0 ; i<n ; i++)
		scanf("%d",&a[i]);
	sort(a,a+n,greater<int>());
	
	for(int i=0 ; i<n ; i+=k){
		t += a[i];
	}
	printf("%d",t);
}
