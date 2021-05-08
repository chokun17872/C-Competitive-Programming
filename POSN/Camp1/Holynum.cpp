/*
    TASK: Holynum
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,k,p;
	scanf("%d %d",&a,&k);
	p  = round(a/pow(10,k));
	printf("%.0lf\n",p*pow(10,k));
	return 0;
}
