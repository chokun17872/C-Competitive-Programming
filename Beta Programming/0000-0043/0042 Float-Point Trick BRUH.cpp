/*
TASK: Float-Point Trick
AUTHOR: passa
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
long double a[100];
int main(){

	int q;
	long double n;
	
	scanf("%d",&q);
	
	for(int i=0 ; i<q ; i++){
		scanf("%Lf",&n);
		a[i] = pow(2,n);
	}
	
	for(int i=0 ; i<q ; i++){
		printf("%.0Lf\n",a[i]);
	}
	return 0;
}


