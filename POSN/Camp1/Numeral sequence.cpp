/*
    TASK: Numeral sequence
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int q,i=1,n;
	scanf("%d",&q);
	
	while(q--){
		scanf("%d",&n);
		while(i!=n){
			i++;
		}
		printf("%d\n",i);
		i=1;	
	}
	
	return 0;
}
