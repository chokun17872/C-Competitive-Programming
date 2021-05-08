/*
    TASK: Propaganda
    LANG: C
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int D,i,ch=1;
	scanf("%d",&D);
	for(i=2 ; i<=sqrt(D) ; i++){
		if(D%i==0)
			ch=0;
	}
	printf((ch==1&&D!=1)?"Yes\n":"No\n");
	return 0;
}
